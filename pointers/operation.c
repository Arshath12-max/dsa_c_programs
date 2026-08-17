  #include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n,i;
    float *a,sum=0,mean,sd=0;

    //printf("enter no of elements:");
    scanf("%d",&n);

    a=(float*)malloc(n*sizeof(float));

    //printf("enter element:\n ");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        sum+=a[i];
    }

    mean=sum/n;

    for(i=0;i<n;i++){
        sd+=(a[i]-mean)*(a[i]-mean);
    }

    sd=sqrt(sd/n);

    printf("Sum = %.2f",sum);
    printf("\nMean = %.2f",mean);
    printf("\nStandard Deviation = %.2f",sd);

    free(a);

    return 0;
}