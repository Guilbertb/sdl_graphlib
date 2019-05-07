CC=gcc
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=`sdl-config --cflags --libs` -lm 
EXEC=test
SRC=  graphlib.c test.c
OBJ= $(SRC:.c=.o)

all:	$(EXEC)

test:	$(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)


%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

.PHONY: clean mrproper

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
			
