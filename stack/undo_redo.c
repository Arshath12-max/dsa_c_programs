 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char data[100];
    struct node *next;
};

struct node* push(struct node* top,char x[]){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    strcpy(newnode->data,x);
    newnode->next=top;

    return newnode;
}

struct node* pop(struct node* top,char x[]){
    struct node* temp;

    if(top==NULL){
        return NULL;
    }

    temp=top;
    strcpy(x,top->data);
    top=top->next;
    free(temp);

    return top;
}

int main(){
    struct node* undo=NULL;
    struct node* redo=NULL;

    char text[100][100];
    char x[100];

    int n,i,undocount,redocount;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",text[i]);
        undo=push(undo,text[i]);
    }

    scanf("%d",&undocount);
    scanf("%d",&redocount);

    for(i=0;i<undocount;i++){
        if(undo!=NULL){
            undo=pop(undo,x);
            redo=push(redo,x);
            n--;
        }
    }

    for(i=0;i<redocount;i++){
        if(redo!=NULL){
            redo=pop(redo,x);
            text[n++][0]='\0';
            strcpy(text[n-1],x);
            undo=push(undo,x);
        }
    }

    printf("Final Actions:\n");

    for(i=0;i<n;i++){
        printf("%s",text[i]);

        if(i<n-1){
            printf(" ");
        }
    }

    return 0;
}