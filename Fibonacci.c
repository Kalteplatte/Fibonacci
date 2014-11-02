#include <stdio.h>
#include <cmath.h>

int Fibonacci1 (int n){
	if (n<0){
		return n;
	}
	if (n==0|n==1){ 
		return n;
	}
	return Fibonacci1(n-1)+Fibonacci1(n-2);

}


int main (){

printf("Fibonacci(1)\n");

return 0;
}

