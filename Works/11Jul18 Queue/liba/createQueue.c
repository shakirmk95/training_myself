#include"queue.h"
#include <stdlib.h>
#include <stdio.h>

queue createQueue(int size)
{
	queue temp  = (queue)malloc(sizeof(queue));
	temp->front = -1;
	temp->rear = -1;
	temp->capacity = size;
	temp->volume = 0;
	
	temp->data = (int*)malloc(size*sizeof(int));
	
	return (temp);
}
	
