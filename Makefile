CC=g++
DEPS = header.h
OBJ =  main.o  display_func.o func.o

LIBS = -lm

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


result_file.c: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)	