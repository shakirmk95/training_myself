typedef struct stacknode {
	int data;
	struct stacknode *node;
}stacknode;

typedef struct stack {
	int size;
	int top;
	stacknode *head;
}*stack;

extern stack createStack(int size);
extern void push(int x, stack s);
extern int pop(stack s);
extern int isEmpty(stack s);
extern int isFull(stack s);
extern void destroyStack(stack s);
