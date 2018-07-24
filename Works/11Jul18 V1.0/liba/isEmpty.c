#include"stack.h"

int isEmpty(stack *s) {
	if((*s).top == -1) {
		return 1;
	}else
		return 0;
}
