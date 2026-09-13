//1.2 HOW TO TRAVERSE AN 1D ARRAY USING INDEX
//traverse a 1d array using pointers
#include<stdio.h>
int main()
{
  int arr1[4]={1,2,3,4};
  for(int i=0;i<4;i++)
  {
    printf("%d\n",*(arr1+i));
  }
  return 0;
}
