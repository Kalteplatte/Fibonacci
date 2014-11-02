#include <stdio.h>
#include <math.h>
#include <iostream>

int Fibonacci1 (int n){
	if (n<0){
		return n;
	}
	if (n==0){ 
		return n;
	}
	if (n==1){
		return n;
	}
	return Fibonacci1(n-1)+Fibonacci1(n-2);

}

int Fibonacci2 (int n){
	if (n<0){
		return n;
	}
	if (n==0|n==1){ 
		return n;
	}
	return Fibonacci1(n-1)+Fibonacci1(n-2);

}

int main (){



return 0;
}

