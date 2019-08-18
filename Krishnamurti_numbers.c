#include <stdio.h>

int main(){
	int sum, fact, num, digit;

	for(int i = 1; i <= 1000; i++){
		num = i;
		sum = 0;

		while(num != 0){
			digit = num%10;
			fact = digit;
			// or we can do that,
			// fact = 1, then we have to do that,
			// for(int j = 2; j <= digit; j++)
			for(int j = 2; j < digit; j++){
			// And here we also can assign 1 to j as it's initial value
			// But because multiply with have no effect so, it's just waste of a cycle
				fact *= j;
			}
			sum += fact;
			num /= 10;
		}
		if(sum == i){
			printf("%d is a krishnamurti number...\n", i);
		}
	}
	return 0;
}
