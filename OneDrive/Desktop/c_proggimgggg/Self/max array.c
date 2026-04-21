#include <stdio.h>
int main(){
    int arr[5]={1,3,2,5,4};
    int i,max;
    max=arr[0];
    for (i=0;i<5;i++){
        if (arr[i]>max){
            max=arr[i];

        }
        

    }
    printf("max=%d",max);
    
    return 0;
}