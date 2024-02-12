#include<stdio.h>
#include<stdlib.h>

int main(){
    int *cptr;
    int num;
    printf("enter the no elements to be entered\n");
    scanf("%d",&num);

    cptr = (int*)(calloc(num,sizeof(int)));
   // for(int i = 0;i<num;i++){
   //     scanf("%d",cptr+i);
   // }

    if(cptr==NULL){
        printf("memory not allocated please free some memeory");
        return 1;
    }

    else    {
        printf("memeory has been allocated sucessfully\n");
    for(int i = 0;i<num;i++){
        //printf("the elements are: %d\t",*(cptr+i));
        printf("the elements are :%d\t",cptr[i]);
    }
    }
    
    free(cptr);
    cptr = NULL;

    if(cptr == NULL){
        printf("\nyes memeory free\n");
    }
    for(int i = 0;i<num;i++){
        //printf("the elements are: %d\t",*(cptr+i));
        printf("the elements are :%d\t",cptr[i]);
    }








    getchar();
    return 0;
}