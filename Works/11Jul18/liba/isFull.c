#include"stack.h"

int isFull(stack *s) {
	if((*s).top == MAX-1) {
		return 1;
	}else
		return 0;
}
