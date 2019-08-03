#include <stdio.h>

int main(){
	int arr[] = {0, 1034, 23, -11, -2344, 0, 243};
	int cur_min;
	int i, len;
	
	len = sizeof(arr)/sizeof(arr[0]);
	cur_min = arr[0];
	
	for(i = 1; i < len; i++){
		if(arr[i] < cur_min){
			cur_min = arr[i];
		}
	}
	
	printf("Minimum value is : %d", cur_min);
	return 0;
}
