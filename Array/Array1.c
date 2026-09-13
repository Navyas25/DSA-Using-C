//1.1 HOW TO INITIALIZE AN ARRAY
//initialize an array using another array
#include<stdio.h>
int main()
{
  int arr1[4]={1,2,3,4};
  int arr2[4];
  for(int i=0;i<4;i++)
  {
    arr2[i]=arr1[i];
  }
  for(int i=0;i<4;i++)
  {
    printf("%d\n",arr2[i]);
  }
  return 0;
}
