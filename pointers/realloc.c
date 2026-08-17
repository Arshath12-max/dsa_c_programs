#include<stdio.h>
#include<stdlib.h>

int main(){
    int *arr;
    int n,newsize,i;

    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&newsize);

    arr=(int *)realloc(arr,newsize*sizeof(int));

    if(newsize>n){
        for(i=n;i<newsize;i++){
            scanf("%d",&arr[i]);
        }
    }

    for(i=0;i<newsize;i++){
        printf("%d ",arr[i]);
    }

    free(arr);

    return 0;
}