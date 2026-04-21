#include <stdio.h>
int main(){
    float arr[10];
    float sum=0;
    float avg;
    
    for(int i=0;i<10;i++){
        printf("enter the element %d:",i+1);
        scanf("%f",&arr[i]);

    }
    for (int i=0;i<10;i++){
        sum=sum+arr[i];
        printf("sum=%f\n",sum);

    }
    avg=sum/10;
    printf("the average is %f",avg);
    return 0;
}