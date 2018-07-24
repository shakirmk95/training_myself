#include<stdio.h>
#include <stdlib.h>
#include"queue.h"

void main() {
	int choice, x, error, size;
	printf("Enter Size: ");
	scanf("%d", &size);
	queue q;
	q = (queue)createQueue(size);
	do {
		printf("1. Enqueue\n2. Dequeue\n3. isEmpty\n4. isFull\nEnter the choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				printf("Enter the Element: ");
				scanf("%d", &x);
				enqueue(x, q);
				break;

			case 2:
				x = dequeue(q);
				printf("%d\n", x);
				break;

			case 3:
				if(isEmpty(q))
					printf("queue is Empty\n");
				else
					printf("queue is not Empty\n");
				break;

			case 4:
				if(isFull(q))
					printf("queue is Full\n");
		                else
					printf("queue is not Full\n");
				break;
				
			default:
				exit(0);
		}
	}while(choice != 5);
	destroyQueue(q);
}
