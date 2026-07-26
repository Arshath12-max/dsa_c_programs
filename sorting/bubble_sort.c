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
    for(i=0;n-1;i++){
        int flag=0;
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    printf("the sorted array is :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

}