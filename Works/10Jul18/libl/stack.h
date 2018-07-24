typedef struct stacknode {
	int data;
	struct stacknode *node;
}stacknode;

typedef struct stack {
	stacknode *head;
	int top;
}stack;

extern push(int x, stack *s);
extern pop(stack *s);
extern isEmpty(stack *s);
extern isFull(stack *s);
