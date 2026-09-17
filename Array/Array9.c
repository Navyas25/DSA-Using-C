//1.14 HOW TO SORT THE ARRAY ALPHABETICALLY
//ascii- a=97,z=122,A=65,Z=90
//strcmp- finds first mismatch pair and return diff between them--cmp(apple,banana)=-1
//if strcmp give positive value=swap the elements
#include<stdio.h>
#include<string.h>
void arrangeAlpha(char arr[][50],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                char temp[50];
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }
    printf("alphabetically arranged array:\n");
    for(int i=0;i<n;i++){
    printf("%s\n",arr[i]);
    }
}
int main(){
    char arr[50][50];
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%s",&arr[i]);
    }
    arrangeAlpha(arr,n);
    return 0;
}
