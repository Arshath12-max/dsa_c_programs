#include<stdio.h>
int compare(char str1[],char str2[],int index){
    if(str1[index]=='\0'&&str2[index]=='\0'){
        return 1;
    }
    if(str1[index]!=str2[index]){
        return 0;
    }
    return compare(str1,str2,index+1);
}
int main(){
    char str1[100],str2[100];
    //printf("enter string1:");
    scanf("%s",str1);
    //printf("enter string 2:");
    scanf("%s",str2);
    printf("%d",compare(str1,str2,0));
    return 0;
}