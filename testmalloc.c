#include<stdio.h>
#include<stdlib.h>


int main() {
    int *mptr;
    int n;
    printf("enter the number of elements to be entered\n");
    scanf("%d",&n);

    mptr = (int*)(malloc(n*(sizeof(int))));
   // for(int i = 0;i<n;i++){
    //    scanf("%d",mptr+i);
   // }
    if(mptr == NULL){
        printf("memory not allocated\n");
        return 1;
    }

    for(int i =0;i<n;i++){
       // printf("the elements are: %d\t",*(mptr+i));
       printf("the elements are :%d\t",mptr[i]);
    }


    free(mptr);
    mptr = NULL;
    if(mptr == NULL){
        printf("yes it is free now\n");
    }



     for(int i =0;i<n;i++){
       // printf("the elements are: %d\t",*(mptr+i));
       printf("\nthe elements are :%d\t",mptr[i]);
    }
    getchar();
    return 0;
}