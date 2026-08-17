#include <stdio.h>

char stack[100];
int top=-1;

void push(char x){
    stack[++top]=x;
}

char pop(){
    return stack[top--];
}

int main(){
    char str[100];
    int i,valid=1;
    char x;

    //printf("Enter string: ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){

        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            push(str[i]);
        }

        else if(str[i]==')' || str[i]==']' || str[i]=='}'){

            if(top==-1){
                valid=0;
                break;
            }

            x=pop();

            if((str[i]==')' && x!='(') ||
               (str[i]==']' && x!='[') ||
               (str[i]=='}' && x!='{')){
                valid=0;
                break;
            }
        }
    }

    if(top!=-1){
        valid=0;
    }

    if(valid==1){
        printf("Balanced\n");
    }
    else{
        printf("Not Balanced\n");
    }

    return 0;
}