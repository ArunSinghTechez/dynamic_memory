#include<stdio.h>
#include<stdlib.h>

int *ptr;
int num,i;

int main(){
    printf("enter the number of blocks needed\n");
    scanf("%d",&num);
    ptr = (int*)malloc(num*sizeof(int));
    printf("enter the elements in the dynamic array\n");
    if(ptr == NULL){
        printf("memeory not allocated");
        exit(0);
    }
    else{
        for(i = 0;i<num;i++){
            scanf("%d",(&ptr[i]));
            //scanf("%d",(ptr+i));
        }
    }


    printf("the elements of array are \n");
    for(i = 0;i<num;i++){
        printf("%d\t",*(ptr+i));
        //printf("%d",ptr[i]);
    }
    free(ptr);
    getchar();
    return 0;

}