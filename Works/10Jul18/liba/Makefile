LIB = stack
LIB_OBJ = push.o pop.o isEmpty.o isFull.o

.SUFFIXES: .c .o

.c.o: 
	gcc -c $< -o $@

lib$(LIB).a: $(LIB_OBJ)
	ar -r lib$(LIB).a $(LIB_OBJ)

push.o: push.c stack.h
pop.o: pop.c stack.h
isEmpty.o: isEmpty.c stack.h
isFull.o: isFull.c stack.h

clean:
	rm -f $(LIB_OBJ) lib$(LIB).a
