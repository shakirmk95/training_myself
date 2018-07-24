LIB = queue
LIB_OBJ = enqueue.o dequeue.o isEmpty.o isFull.o createQueue.o destroyQueue.o

.SUFFIXES: .c .o

.c.o: 
	gcc -c $< -o $@

lib$(LIB).a: $(LIB_OBJ)
	ar -r lib$(LIB).a $(LIB_OBJ)

enqueue.o: enqueue.c queue.h
dequeue.o: dequeue.c queue.h
isEmpty.o: isEmpty.c queue.h
isFull.o: isFull.c queue.h
createQueue.o: createQueue.c queue.h
destroyQueue.o: destroyQueue.c queue.h

clean:
	rm -f $(LIB_OBJ) lib$(LIB).a
