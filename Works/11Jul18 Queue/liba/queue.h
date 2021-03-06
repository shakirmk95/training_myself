typedef struct queue {
	int *data, front, rear, capacity, volume;
}*queue;

extern queue createQueue(int size);
extern void enqueue(int x, queue q);
extern int dequeue(queue q);
extern int isEmpty(queue q);
extern int isFull(queue q);
extern void destroyQueue(queue q);
