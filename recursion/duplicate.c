#include<stdio.h>
void replace(char str[],int index){
    if(str[index]=='\0'||str[index+1]=='\0'){
        return;
    }
    if(str[index]==str[index+1]){
        char ch=str[index];
        while(str[index]==ch){
            int j=index;
            while(str[j]!='\0'){
            str[j]=str[j+1];
            j++;
            }
        }
        replace(str,0);
    }
    else{
        return replace(str,index+1);
    }
}
int main(){
    char str[100];
    //printf("enter the string:");
    scanf("%s",str);
    replace(str,0);
    printf("%s",str);
    return 0;
}