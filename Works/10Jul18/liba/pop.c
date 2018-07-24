#include"stack.h"

int pop(stack *s) {
	if(isEmpty(s))
		return -999;
	else {
		return((*s).data[(*s).top--]);
	}
}
