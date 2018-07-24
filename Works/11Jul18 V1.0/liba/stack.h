#define MAX 100

typedef struct stack {
	int data[MAX];
	int top;
}stack;

extern push(int x, stack *s);
extern pop(stack *s);
extern isEmpty(stack *s);
extern isFull(stack *s);
