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
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("the sorted array is :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

}
