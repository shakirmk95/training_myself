#include"stack.h"
#include<stdlib.h>

stack createStack() {
	struct stacknode head;
	head = (struct stacknode *)NULL;
	return(&head);
}
