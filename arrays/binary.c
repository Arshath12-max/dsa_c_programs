#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,low,high,mid;
    char a[100][50],key[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    scanf("%s",key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(strcmp(a[mid],key)==0)
        {
            printf("Found at index %d",mid);
            return 0;
        }
        else if(strcmp(key,a[mid])<0)
            high=mid-1;
        else
            low=mid+1;
    }
    printf("Not found");
    return 0;
}