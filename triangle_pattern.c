
#include <stdio.h>

int main(){
    int i, j, h;

    printf("Enter the height of the tree : ");
    scanf("%d", &h);

    for(i = 0; i < h; i++){
        for(j = 0; j < h-i-1; j++){
            printf(" ");
        }
        for(j = 0; j < 2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
