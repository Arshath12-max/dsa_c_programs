#include <stdio.h>

int main(){
    int a[100],stack[100],result[100];
    int n,i,top=-1;

    //printf("Enter number of elements:");
    scanf("%d",&n);

    //printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){

        while(top!=-1 && stack[top]<a[i]){
            top--;
        }

        if(top==-1){
            result[i]=-1;
        }
        else{
            result[i]=stack[top];
        }

        stack[++top]=a[i];
    }

    //printf("Previous greater elements:");

    for(i=0;i<n;i++){
        printf("%d ",result[i]);
    }

    return 0;
}