#include <stdio.h>
#include <math.h>
#include <iostream>

int Fibonacci1 (int n){  //recursive function
	if (n<=1){
		return n;
	}
	return Fibonacci1(n-1)+Fibonacci1(n-2);

}

int Fibonacci2 (int n){  //function with linear time and memory
	if(n<=1){
		return n;
	}
	fib[0]=0;
	fib[1]=1;
	for (int i=2; i==n-1; i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	return fib[n-1];
}

int main (){



return 0;
}

