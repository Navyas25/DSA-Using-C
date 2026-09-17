//1.15 HOW TO CHECK IF A STRING IS A PALINDROME OR NOT
//beginner friendly solution
//palindrome=symmetrical
#include<stdio.h>
#include<string.h>
void checkPalindrome(char arr[]){
    int p=1;
    int n=strlen(arr);
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
        p=0;
        break;
        }
    }
    if(p==1)
    printf("it is a palindrome");
    else
    printf("it is not a palindrome");
}
int main(){
    char arr[50];
    printf("enter the string:");
    scanf("%s",&arr);
    checkPalindrome(arr);
    return 0;
}
