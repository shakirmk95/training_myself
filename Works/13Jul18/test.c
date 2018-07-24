#include<stdio.h>
#include"stack.h"

void main() {
	int choice, x, error, size, flag = 0;
	stack s;
	do {
		printf("1. Create a stack\n2. Push\n3. Pop\n4. isEmpty\n5. isFull\n6. Destroy Stack\n7. Exit\nEnter the choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				if(!flag) {
					flag = 1;
					printf("Enter the size: ");
					scanf("%d", &size);
					s = (stack)createStack(size);
				}else {
					printf("Already a stack is there\n");
				}
				break;
				
			case 2:
				if(flag) {
					printf("Enter the Element: ");
					scanf("%d", &x);
					push(x, s);
				}else {
					printf("Create a stack to perform this\n");
				}
				break;

			case 3:
				if(flag) {
					x = pop(s);
					printf("%d\n", x);
				}else {
					printf("Create a stack to perform this\n");
				}
				break;

			case 4:
				if(flag) {
					if(isEmpty(s))
						printf("Stack is Empty\n");
					else
						printf("Stack is not Empty\n");
				}else {
					printf("Create a stack to perform this\n");
				}
				break;

			case 5:
				if(flag) {
					if(isFull(s))
						printf("Stack is Full\n");
				        else
						printf("Stack is not Full\n");
				}else {
					printf("Create a stack to perform this\n");
				}
				break;
			
			case 6:
				if(flag) {
					destroyStack(s);
					printf("Stack destroyed\n");
					flag = 0;
				}else {
					printf("Create a stack to perform this\n");
				}
				break;
				
			case 7:
				if(flag) {
					destroyStack(s);
				}
				printf("Program Exitted\n");
				break;
			
			default:
				break;
		}
	}while(choice != 7);
}
