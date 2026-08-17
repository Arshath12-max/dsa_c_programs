#include<stdio.h>
int main(){
    int i,n,m;
    char str[100],dest[100];
    //printf("enter the string:");
    scanf("%s",str);
    //printf("enter starting index:");
    scanf("%d",&m);
    //printf("enter no of characters:");
    scanf("%d",&n);
    for(i=0;i<n&&str[m-1+i]!='\0';i++){
        dest[i]=str[m-1+i];
    }
    dest[i]='\0';
    printf("%s",dest);
}
