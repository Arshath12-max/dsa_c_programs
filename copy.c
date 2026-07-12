#include<stdio.h>
int main(){
    int i,j=0,n1,n2;
    char arr1[100],arr2[100];
    printf("enter the string:");
    scanf("%s",arr1);
    printf("\n enter start index:");
    scanf("%d",&n1);
    printf("\n enter end index:");
    scanf("%d",&n2);
    for(i=n1+1;i<n2&&arr1[i]!='\0';i++)
    {
        arr2[j++]=arr1[i];
    }
    arr2[j]='\0';
    printf("the copied string is :%s",arr2);
}