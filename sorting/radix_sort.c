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
int count_sort(int a[],int n,int pos){
    int count[10]={0};
     for(int i=0;i<n;i++){
        count[(a[i]/pos)%10]++;
    }
     for(int i=1;i<10;i++){
        count[i]=count[i]+count[i-1];
    }
    int b[n];
    for(int i=n-1;i>=0;i--){
        b[--count[(a[i]/pos)%10]]=a[i];
    } 
     for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}   
int radix(int a[],int n){
    int max=largest(a,n);
    for(int pos=1;max/pos>0;pos*10){
        count_sort(a,n,pos);
    }
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
    radix(a,n);
    printf("the sorted array is:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}