APP_OBJ = test.o
LIB = stack
LIBDIR = ./libl

.SUFFIXES: .c .o

.c.o:
	gcc -I$(LIBDIR) -c $<

a.out: $(APP_OBJ) $(LIBDIR)/lib$(LIB).a 
	gcc $(APP_OBJ) -L$(LIBDIR) -l$(LIB)

$(LIBDIR)/lib$(LIB).a: 
	make -C $(LIBDIR)

test.o: test.c $(LIBDIR)/$(LIB).h

clean: 
	rm -f $(APP_OBJ) a.out
	make -C $(LIBDIR) clean	
