//1.10 HOW TO DELETE A PARTICULAR ITEM FROM AN ARRAY
#include<stdio.h>
//1.delete by value
void deleteByValue(int arr[],int *n,int value){
    int index=-1;
    for(int i=0;i<*n;i++){
        if(arr[i]==value){
            index=i;
            break;
    }}
    if(index==-1)
        printf("element not found\n");
    else{
        for(int i=index;i<*n-1;i++){
            arr[i]=arr[i+1];
        }
        (*n)--;
        printf("\nnew array=\n");
        for(int i=0;i<*n;i++)
            printf("%d\n",arr[i]);  
}}
//2.delete by index
//2.a.delete at the beginning
void deleteBeginning(int arr[],int *n){
    for(int i=0;i<*n-1;i++){
        arr[i]=arr[i+1];
    }
    (*n)--;
    printf("\nnew array=\n");
        for(int i=0;i<*n;i++)
            printf("%d\n",arr[i]); 
}
//2.b.delete from end
void deleteEnd(int arr[],int *n){
    (*n)--;
    printf("\nnew array=\n");
        for(int i=0;i<*n;i++)
            printf("%d\n",arr[i]); 
}
//2.c.at any index
void deleteIndex(int arr[],int *n, int index){
    for(int i=index;i<*n-1;i++){
        arr[i]=arr[i+1];
    }
    (*n)--;
    printf("\nnew array=\n");
        for(int i=0;i<*n;i++)
            printf("%d\n",arr[i]); 
}
int main()
{
    int arr[10],n,value,index;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter your array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter value you want to delete");
    scanf("%d",&value);
    deleteByValue(arr,&n,value);
    deleteBeginning(arr,&n);
    deleteEnd(arr,&n);
    printf("enter the index you want to delete:");
    scanf("%d",&index);
    deleteIndex(arr,&n,index);
    return 0;
}
