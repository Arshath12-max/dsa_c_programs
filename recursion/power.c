#include<stdio.h>
int power(int base,int exponent){
    if(exponent==0){
        return 1;
    }
    return base*(power(base,exponent-1));
}
int main(){
    int base,exponent;
    //printf("enter base:");
    scanf("%d",&base);
    //printf("enter exponent:");
    scanf("%d",&exponent);
    power(base,exponent);
    printf("%d",power(base,exponent));
} 