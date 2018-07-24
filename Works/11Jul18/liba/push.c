#include"stack.h"
#include<stdio.h>

int push(int x, stack *s) {
	if(isFull(s))
		return 1;
	else {
		(*s).top++;
		(*s).data[(*s).top] = x;
		return 0;
	}
}
