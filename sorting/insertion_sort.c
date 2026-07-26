#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter no of elements :");
    scanf("%d",&n);
    int a[n];
    printf("\nenter the unsorted elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++){
        int temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("the sorted array is :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

}