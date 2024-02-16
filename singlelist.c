#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

struct node
{
    int data;
    struct node *next;
} *start;

void create()
{ // node at the end of the list

   

    start = (struct node *)(malloc(sizeof(struct node)));
   start->data = 0;
   start->next = NULL;

    printf("enter the data in the list\n");
    scanf("%d", &start->data);
    start->next=NULL;

    struct node *new_node, *curr_ptr;

    curr_ptr = start;

    while (1)
    {
        printf("DO you want to continue----(Y) or (N)\n");
        getchar();
         char ch;
            ch =getchar();

        if (toupper(ch) == 'Y')
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data in new node\t");
            scanf("%d", &new_node->data);
            
            curr_ptr->next =new_node;
            curr_ptr = new_node;
        }
        else
        {
            curr_ptr->next=NULL;
            break;
        }
    }
}

void display_list()
{
    struct node *trv;
    trv = start;
    printf("The list is \n");
    while(trv != NULL)
    {
        printf("%d\t",trv->data);
        trv = trv->next;
    }
}

void free_list()
{
    struct node *temp;
    while(start!=NULL)
    {
        temp = start;
        start = start->next;
        free(temp);

    }

}



int main(){
    create();
    display_list();
    free_list();

    getchar();
    return 0;

}