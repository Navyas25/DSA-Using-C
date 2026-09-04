//traverse a 2d array using index
#include<stdio.h>
int main()
{
  int arr1[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
  for(int i=0;i<4;i++){
      for(int j=0;j<4;j++)
  {
    printf("%d",arr1[i][j]);
  }
  printf("\n");
  }
  return 0;
}
