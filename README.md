Я пытался сделать бота используя алгоритм minmax, но у меня не получилось, поэтому я решил сделать реализацию игры в шашки с человеком. 
Чтобы запустить ее используйте утилиту make.

CC=g++
DEPS = header.h
OBJ =  main.o  display_func.o func.o

LIBS = -lm

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


result_file.c: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)	
