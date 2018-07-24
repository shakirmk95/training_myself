#include"stack.h"
#include<stdio.h>
#include<stdlib.h>

void push(int x, stack s) {
	stack new;
	if(isEmpty(s)) {
		(*s).data = x;
		printf("2\n");
		(*s).node = NULL;
		printf("3\n");
	}else {
		printf("4\n");
		new = (stack)malloc(sizeof(struct stacknode));
		printf("5\n");
		(*new).data = x;
		printf("6\n");
		(*new).node = s;
		printf("7\n");
		s = new;
		printf("8\n");
	}
	printf("9\n");
}
