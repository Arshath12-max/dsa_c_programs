#include<stdio.h>
int main(){
    int i,n,d;
    int arr[100],new[100];
    //printf("enter no of elements:");
    scanf("%d",&n);
    //printf("enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //printf("enter rotate position :");
    scanf("%d",&d);
    d=d%n;
    for(i=0;i<n;i++){
        new[i]=arr[(i+d)%n];
    }
    for(i=0;i<n;i++){
        printf("%d ",new[i]);
    }
}