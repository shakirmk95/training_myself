#include"stack.h"

int isFull(stack s) {
	if((*s).top == (*s).size)
		return 1;
	else 
		return 0;
}
