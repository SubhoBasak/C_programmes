#include <stdio.h>

int sum_of_fibonacci_numbers(int n);

int main(){
	int n;
	int sum;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	sum = sum_of_fibonacci_numbers(n);
	if(sum >= 0){
		printf("Sum of first %d fibbonacci numbers is %d", n, sum);
	}
	else{
		printf("Invalid operation !");
	}
	return 0;
}

int sum_of_fibonacci_numbers(int n){
	int i, sum = 0;
	int first = 0, second = 1;
	
	if(n == 1){
		return first;
	}
	else if(n == 2){
		return second;
	}
	else if(n > 2){
		for(i = 3; i <= n; i++){
			sum = first+second;
			first = second;
			second = sum;
		}
		return sum;
	}
	return -1;
}
