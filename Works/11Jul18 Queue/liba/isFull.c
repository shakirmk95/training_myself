#include"queue.h"

int isFull(queue q) {
	if(q->volume == q->capacity) {
		exit(0);
	}else {
		return 0;
	}
}
