#Providing Objects

LIB_OBJ = tri.o tri1.o tri2.o tri3.o
LIB = tri

.SUFFIXES: .c .o

.c.o:
	gcc -c $< -o $@

lib$(LIB).a: $(LIB_OBJ)
	ar -r lib$(LIB).a $(LIB_OBJ)

tri.o: tri.c tri.h
tri1.o: tri1.c tri.h
tri2.o: tri2.c tri.h
tri3.o: tri3.c tri.h

clean:
	rm -f lib$(LIB).a $(LIB_OBJ)
