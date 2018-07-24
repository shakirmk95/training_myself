typedef struct stacknode {
	int data;
	struct stacknode *node;
}*stack;

extern struct stacknode* createStack();
extern void push(int x, stack s);
extern int pop(stack s);
extern int isEmpty(stack s);
extern int isFull(stack s);
extern void destroyStack(stack s);
