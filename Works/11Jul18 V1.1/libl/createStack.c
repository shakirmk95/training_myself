#include"stack.h"
#include<stdlib.h>

stack createStack() {
	stack head = (stack)malloc(sizeof(struct stacknode));
	head = NULL;
	return(&head);
}
