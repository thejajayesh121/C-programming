#include <stdio.h>
int main(){
    int arr[6];
    int i;
    for (i=0;i<=5;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);

    }
    printf("%d\n",arr[3]);
    return 0;
    
}