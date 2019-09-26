#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <pthread.h>

#include <linux/netlink.h>

int startProcess() {
    int mSock;
    printf ("Processing to start\n");

    struct sockaddr_nl nladdr;
    int sz = 64 * 1024;
    int on = 1;

    memset(&nladdr, 0, sizeof(nladdr));
    nladdr.nl_family = AF_NETLINK;
    nladdr.nl_pid = getpid();
    nladdr.nl_groups = 0xffffffff;

    if ((mSock = socket(PF_NETLINK, SOCK_DGRAM | SOCK_CLOEXEC,
            NETLINK_KOBJECT_UEVENT)) < 0) {
        printf("Unable to create uevent socket: %s", strerror(errno));
        return -1;
    }

    // When running in a net/user namespace, SO_RCVBUFFORCE is not available.
    // Try using SO_RCVBUF first.
    if ((setsockopt(mSock, SOL_SOCKET, SO_RCVBUF, &sz, sizeof(sz)) < 0) &&
        (setsockopt(mSock, SOL_SOCKET, SO_RCVBUFFORCE, &sz, sizeof(sz)) < 0)) {
        printf("Unable to set uevent socket SO_RCVBUF/SO_RCVBUFFORCE option: %s", strerror(errno));
    }

    if (setsockopt(mSock, SOL_SOCKET, SO_PASSCRED, &on, sizeof(on)) < 0) {
        printf("Unable to set uevent socket SO_PASSCRED option: %s", strerror(errno));
    }

    if (bind(mSock, (struct sockaddr *) &nladdr, sizeof(nladdr)) < 0) {
        printf("Unable to bind uevent socket: %s", strerror(errno));
    }
    printf ("Success\n");
    while (1);
    return 0;
}

void * thread (void *) {
    startProcess ();
}

int main() {
    printf ("Started process\n");
    pthread_t th1;

    pthread_create (&th1, NULL, &thread, NULL);
    pthread_join (th1, NULL);
#if 0
    int status = 0;

    if (mHandler->stop()) {
        printf("Unable to stop NetlinkHandler: %s", strerror(errno));
        status = -1;
    }
    delete mHandler;
    mHandler = NULL;

    close(mSock);
    mSock = -1;

    return status;
#endif	
    return 0;
}
