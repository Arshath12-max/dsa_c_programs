#include<stdio.h>
int main(){
    int n,i,largest,second;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=second=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
            second=largest;
        }
        if(arr[i]>second&&arr[i]!=largest){
            second=arr[i];
        }
    }
    printf("the second largest element is :%d",second);
}