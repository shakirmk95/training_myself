APP_OBJ = test.o
LIB = queue
LIBDIR = ./liba

.SUFFIXES: .c .o

.c.o:
	gcc -I$(LIBDIR) -c $<

a.out: $(APP_OBJ) libs
	gcc $(APP_OBJ) -L$(LIBDIR) -l$(LIB)

libs: 
	make -C $(LIBDIR)

test.o: test.c $(LIBDIR)/$(LIB).h

clean: 
	rm -f $(APP_OBJ) a.out
	make -C $(LIBDIR) clean	
