#include<stdio.h>
#include"stack.h"

void main() {
	int choice, x, error, size;
	stack s;
	printf("Enter the size: ");
	scanf("%d", &size);
	s = (stack)createStack(size);
	do {
		printf("1. Push\n2. Pop\n3. isEmpty\n4. isFull\nEnter the choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				printf("Enter the Element: ");
				scanf("%d", &x);
				push(x, s);
				break;

			case 2:
				x = pop(s);
				printf("%d\n", x);
				break;

			case 3:
				if(isEmpty(s))
					printf("Stack is Empty\n");
				else
					printf("Stack is not Empty\n");
				break;

			case 4:
				if(isFull(s))
					printf("Stack is Full\n");
		                else
					printf("Stack is not Full\n");
		}
	}while(choice != 5);
}
