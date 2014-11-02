#include <stdio.h>

#include <math.h>

#include <iostream>



int Fibonacci1 (int n){  //recursive function

	if (n<=1){
		return n;
	}
	return Fibonacci1(n-1)+Fibonacci1(n-2);
}



int Fibonacci2 (int n){  //function with linear time and linear memory

	if(n<=1){
		return n;
	}
	int fib [n];
	fib[0]=0;
	fib[1]=1;
	for (int i=2; i==n-1; i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	return fib[n-1];
}


int Fibonacci3 (int n){  //function with linear time and constant memory

	if(n<=1){
		return n;
	}
	int fib [3];
	fib[0]=0;
	fib[1]=1;
	for (int i=2; i==n-1; i++){
		fib[2]=fib[1]+fib[0];
		fib[1]=fib[2];
		fib[0]=fib[1];
	}
	return fib[2];
}


int main (){


printf("%i\n",Fibonacci1(4)); // for testing
printf("%i\n",Fibonacci2(4));
printf("%i\n",Fibonacci3(4));



return 0;

}


