#include"queue.h"
#include<stdio.h>

int dequeue(queue q) {
	int temp;
	if(isEmpty(q)) {
		//printf("q->volume: %d\n", q->volume);
		return -999;
	}else {
		//printf("q->front: %d\n", q->front);
		temp = q->data[q->front];
		
		q->front++;
		q->volume--;
		
		if(q->volume == 0)
		{
		q->front = -1;
		q->rear = -1;
		}
		return(temp);
		
		
		
		
		
	}
}
