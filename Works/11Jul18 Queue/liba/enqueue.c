#include"queue.h"
#include<stdlib.h>

void enqueue(int x, queue q) {
	if(isFull(q))
		return;
	else {
		if(q->volume == 0) {
			q->front = 0;
		}
		q->rear++;
		q->data[q->rear] = x;
		q->volume++;
	}
}
