//1.5 HOW TO ADD ELEMENTS IN THE ODD AND EVEN PLACES IN THE ARRAY
//add even and odd place numbers of an array
#include<stdio.h>
int evenSum(int arr[],int n)
{
    int sum=0;
    for(int i=1;i<n;i+=2)
        sum+=arr[i];
    return sum;
}
int oddSum(int arr[],int n)
{
    int sum=0;
    for (int i=0;i<n;i+=2)
        sum+=arr[i];
        return sum;
}
int allSum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}
int main()
{
  int a[50],n,choice;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("enter the elements of the array:");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter your choice:\n1.even sum\n2.odd sum\n3.all sum");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("%d",evenSum(a,n));
            break;
        case 2:
            printf("%d",oddSum(a,n));
            break;
        case 3:
            printf("%d",allSum(a,n));
            break;
        default:
            printf("invalid choice");
            break;
    }
    return 0;
}
