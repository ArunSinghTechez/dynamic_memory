#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int num,n;
    printf("enter the no of elements to be entered\n");
    scanf("%d",&n);

    ptr = (int*)(malloc(n*sizeof(int)));

    for(int i = 0;i<n;i++){
        printf("enter the element\t");
        scanf("%d",ptr + i);
    }

    for(int i = 0;i<n;i++){
        printf("the element is :%d\t",*(ptr+i));
    }


    free(ptr);



    getchar();
    return 0;
}