#include"queue.h"
#include<stdio.h>

int isEmpty(queue q) {
	//printf("q->volume: %d\n", q->volume);
	if(q->volume == 0) {
		return 1;
	}else {
		return 0;
	}
}
