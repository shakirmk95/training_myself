#Providing Objects

APP_OBJ = main.o
LIB = tri
LIBDIR = ./lib

.SUFFIXES: .c .o

.c.o:
	gcc -I$(LIBDIR) -c $<

a.out: $(APP_OBJ) libs
	gcc $(APP_OBJ) -L$(LIBDIR) -l$(LIB)

main.o: main.c $(LIBDIR)/$(LIB).h

libs:
	make -C $(LIBDIR) 
	
clean:
	rm -f a.out $(APP_OBJ)
	make -C $(LIBDIR) clean  
