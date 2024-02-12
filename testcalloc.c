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
        printf("memory not allocated");
        return 1;
    }

    else    {
    for(int i = 0;i<num;i++){
        //printf("the elements are: %d\t",*(cptr+i));
        printf("the elements are :%d\t",cptr[i]);
    }
    }
    








    getchar();
    return 0;
}