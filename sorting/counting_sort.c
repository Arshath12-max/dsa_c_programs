#include<stdio.h>
int largest(int a[],int n){
    int large=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    return large;
}
int main(){
    int i,n,j;
    printf("enter no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k = largest(a, n);
    int counter[k + 1];
    for(i=0;i<=k;i++){
        counter[i]=0;
    }
    for(i=0;i<n;i++){
        counter[a[i]]++;
    }
    for(i=1;i<=k;i++){
        counter[i]=counter[i]+counter[i-1];
    }
    int b[n];
    for(i=n-1;i>=0;i--){
        b[--counter[a[i]]]=a[i];
    }
    for(i=0;i<n;i++){
        a[i]=b[i];
    }
    printf("the sorted array is:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}