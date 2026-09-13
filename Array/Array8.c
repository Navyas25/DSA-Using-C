//1.12 HOW TO FIND THE MAXIMUM NUMBER IN AN ARRAY
#include<stdio.h>
void maxInArray(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("the largest element is: %d",max);
}
int main()
{
    int arr[10],n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter your array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxInArray(arr,n);
    return 0;
}
