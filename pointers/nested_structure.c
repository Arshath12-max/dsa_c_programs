 #include<stdio.h>

struct DOB{
    int day;
    int month;
    int year;
};

struct student{
    char name[30];
    struct DOB dob;
    int m1,m2,m3;
    int total;
    float percentage;
};

int main(){
    struct student s[10];
    int i,n;

    scanf("%d",&n);

    for(i=0;i<n;i++){
       scanf("%s",s[i].name);
       scanf("%d%d%d",&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
       scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);

       s[i].total=s[i].m1+s[i].m2+s[i].m3;
       s[i].percentage=s[i].total/3.0;
    }

    for(i=0;i<n;i++){
        printf("Name: %s\n",s[i].name);
        printf("DOB: %02d-%02d-%04d\n",s[i].dob.day,s[i].dob.month,s[i].dob.year);
        printf("Total: %d\n",s[i].total);

        if(s[i].percentage>50){
            printf("Result: Pass\n");
        }
        else{
            printf("Result: Fail\n");
        }
    }

    return 0;
}