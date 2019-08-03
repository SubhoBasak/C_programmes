#include <stdio.h>

int main(){
	int arr[] = {11, 10, 34, 992, 29, -11, -3984, 0, 13};
	int cur_max;
	int i, len;

	len = sizeof(arr)/sizeof(arr[0]);
	cur_max = arr[0];

	for(i = 1; i < len; i++){
		if(arr[i] > cur_max){
			cur_max = arr[i];
		}
	}

	printf("Maximum value is : %d", cur_max);

	return 0;
}
