#include <stdio.h>

// Using iteration procedure
int power(int n, int p){
	int i, N = 1;
	for(i = 0; i < p; i++){
		N *= n;
	}
	return N;
}

int main(){
	int n, p;
	int N;

	printf("Enter the number : ");
	scanf("%d", &n);
	printf("Enter the power : ");
	scanf("%d", &p);
	
	N = power(n, p);
	printf("%d to the power %d is %d", n, p, N);
	
	return 0;
}
