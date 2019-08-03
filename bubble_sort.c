#include <stdio.h>

int main(){
	int arr[10] = {3, 2, 9, 9, 5, 1, -11, 23, 8, 0};
	int len, tmp, flag;
	int i, j;

	len = sizeof(arr)/sizeof(arr[0]);

	printf("Unsorted array : \n");
	for(i = 0; i < 10; i++){
		printf("%d, ", arr[i]);
	}
	
	for(i = 0; i < len; i++){
		flag = 0;
		for(j = 0; j < len-1; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 1;
			}
		}
		if(flag == 0){
			break;
		}
	}

	printf("\n\nSorted array : \n");
	for(i = 0; i < 10; i++){
		printf("%d, ", arr[i]);
	}

	return 0;
}
