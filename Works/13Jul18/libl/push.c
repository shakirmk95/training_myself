#include"stack.h"
#include<stdlib.h>
#include<stdio.h>

void push(int x, stack s) {
	stacknode *new = (stacknode *)malloc(sizeof(stacknode));
	if(isFull(s)){
		printf("Stack is full\n");
		//exit(0);
	}else if (isEmpty(s)) {
		(*s).top++;
		((*s).head) = new;
		(*((*s).head)).node = NULL;
		(*((*s).head)).data = x;
	}else {
		(*s).top++; 
		(*new).data = x;
		(*new).node = (*s).head;
		(*s).head = new;
	}
}
