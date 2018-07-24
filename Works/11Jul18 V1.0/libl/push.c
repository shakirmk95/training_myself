#include"stack.h"
#include<stdlib.h>

void push(int x, stack s) {
	stack new;
	new = createStack();
	if(isEmpty(s)) {
		(*s).node = NULL;
		(*s).data = x;
	}else {
		(*new).data = x;
		(*new).node = s;
		s = new;
	}
}
