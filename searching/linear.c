#include<stdio.h>
int main(){
    int n,i,key,found=0;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter array elements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n enter element to serach:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            found=1;
        }
    }
    if(found==1){
        printf("\n element found at position %d",i);
    }
    else{
        printf("element not found");
    }
}