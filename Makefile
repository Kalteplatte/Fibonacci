CC=gcc -g #Debugger
          # oder gcc -O3
          # -march=...



default: Fibonacci

Fibonacci.o :Fibonacci.c
	gcc Fibonacci.c -c 


Fibonacci: Fibonacci.o
	$(CC) Fibonacci.o -o Fibonacci



clean:
	rm Fibonacci.o Fibonacci



#run: Fibonacci
#	./Fibonacci

