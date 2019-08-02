#include <stdio.h>

int factorial(int n){
	if(n == 1||n == 0){
		return 1;
	}
	else if(n < 0){
		printf("Invalid operation !");
		return 0;
	}
	return n*factorial(n-1);
}

int main(){
	int n;
	int N;

	printf("Enter the number : ");
	scanf("%d", &n);

	N = factorial(n);
	printf("Factorial of %d is %d", n, N);
	return 0;
}
