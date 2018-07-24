#include<stdio.h>
#include"stack.h"

void main() {
	int choice, x, error;
	stack s1;
	stack *s;
	s = &s1;
	(*s).top = -1;
	do {
		printf("1. Push\n2. Pop\n3. isEmpty\n4. isFull\nEnter the choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				printf("Enter the Element: ");
				scanf("%d", &x);
				error = push(x, s);
				if(error) {
					printf("ERR: Stack is full\n");
				}
				break;

			case 2:
				x = pop(s);
				if(x == -999)
					printf("ERR: Stack is empty\n");
				else 
					printf("%d is Poped\n", x);
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
