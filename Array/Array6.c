//1.6 HOW TO PERFORM OPERATIONS INVOLVING EXTERNAL VARIABLES
//How to Multiply the Elements of an Array
#include<stdio.h>
#include<math.h>
void multiply(int arr[],int n){
    int mult=1;
    for(int i=0;i<n;i++){
        mult*=arr[i];
    }
    printf("product of array elements is: %d\n", mult);
}
//How to Add only the Even Elements in the Array
void addEven(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i+=2)
        if(arr[i]%2==0)
            sum+=arr[i];
    printf("sum of even array elements= %d",sum);
}
//How to Add an Element to Every Element of the Array
void addElement(int arr[],int n,int a){
    for(int i=0;i<n;i++){
        arr[i]+=a;
    }
    printf("\nnew array:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
//How to Square Each Element of the Array
void squareArray(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=pow(arr[i],2);
    }
    printf("new array:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
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
    multiply(arr,n);
    addEven(arr,n);
    addElement(arr,n,3);
    squareArray(arr,n);
    return 0;
}
