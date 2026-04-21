#include <stdio.h>
int main()
{
    int arr[7];
    int i;
    for (i=0;i<7;i++){
        printf("enter the element %d:",i+1);
        scanf("%d",&arr[i]);

    }
    for (i=0;i<7;i++){
        printf("%d ",arr[i]);

    }
    return 0;

}