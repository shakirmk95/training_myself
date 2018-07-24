#include"queue.h"
#include <stdlib.h>
#include <stdio.h>

void destroyQueue(queue q) {

	free(q->data);
	q->data=NULL;
	free(q);
	q=NULL;
	printf("Queue Destroyed\n");
}
