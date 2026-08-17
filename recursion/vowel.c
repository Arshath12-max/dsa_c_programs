#include<stdio.h>
int binarysearch(char vowels[],int low,int high,char key){
    if(low>high){
        return 0;
    }
    int mid=(low+high)/2;
    if(vowels[mid]==key){
        return 1;
    }
    if(key<vowels[mid]){
       return  binarysearch(vowels,low,mid-1,key);
    }
    else{
        return binarysearch(vowels,mid+1,high,key);
    }
}
void replace(char str[],int index,char vowels[]){
    if(str[index]=='\0'){
        return ;
    }
    if(binarysearch(vowels,0,3,str[index])){
        str[index]='u';
    }
    replace(str,index+1,vowels);
}
int main(){
    char str[100];
    char vowels[4]={'a','e','i','o'};
    //printf("enter string:");
    fgets(str,sizeof(str),stdin);
    replace(str,0,vowels);
    printf("%s",str);
    return 0;
}