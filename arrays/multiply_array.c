#include<stdio.h>
#include<stdlib.h>

int main(){
    int r1,c1,r2,c2;
    int i,j,k;
    int *a,*b,*c;

    scanf("%d%d",&r1,&c1);
    scanf("%d%d",&r2,&c2);

    if(c1!=r2){
        printf("Matrix multiplication not possible");
        return 0;
    }

    a=(int *)malloc(r1*c1*sizeof(int));
    b=(int *)malloc(r2*c2*sizeof(int));
    c=(int *)malloc(r1*c2*sizeof(int));

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",(a+i*c1+j));
        }
    }

    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",(b+i*c2+j));
        }
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            *(c+i*c2+j)=0;
            for(k=0;k<c1;k++){
                *(c+i*c2+j)+=(*(a+i*c1+k))*(*(b+k*c2+j));
            }
        }
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",*(c+i*c2+j));
        }
        printf("\n");
    }

    free(a);
    free(b);
    free(c);

    return 0;
}