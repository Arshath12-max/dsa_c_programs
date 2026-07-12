#include<stdio.h>
int main(){
    int i,n,low,mid,high,key;
    printf("entre no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter sorted elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n enter element ot search:");
    scanf("%d",&key);
    low=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("element found at position %d",mid);
            return 0;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("element not found ");
    return 0;
}