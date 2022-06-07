CC=gcc
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=`sdl-config --cflags --libs` -lm 
EXEC=test
SRC=  graphlib.c $(EXEC).c
OBJ= $(SRC:.c=.o)

all:$(EXEC)

$(EXEC):$(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS) $(LDFLAGS)


%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

.PHONY: clean mrproper

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
			
