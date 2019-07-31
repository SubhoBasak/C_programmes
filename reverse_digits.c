#include <stdio.h>

int main(){
	int digit = 0;
	int reverse = 0;
	
	printf("Enter the digit : ");
	scanf("%d", &digit);
	
	while(digit != 0){
		reverse *= 10;
		reverse += digit%10;
		digit /= 10;
	}
	printf("\nReverse of %d is %d", digit, reverse);
	return 0;
}
