#include <stdio.h>

int main(){
	int digit = 0;
	int sum = 0;
	
	printf("Enter the digit : ");
	scanf("%d", &digit);
	
	int tmp = digit;
	
	while(digit != 0){
		sum += digit%10;
		digit /= 10;
	}
	printf("\nSum of %d is %d", tmp, sum);
	return 0;
}
