#include<stdio.h>
#include<stdlib.h>

int *ptr;
int num =5;




int main(){
    ptr = (int*)(malloc(num*(sizeof(int))));

    printf("enter the five elements\n");
    for(int i =0;i<5;i++){
        scanf("%d",ptr + i);

    }

    printf("\n printing five elements\n");
    for(int i = 0;i<5;i++){
        printf("%d\t",*(ptr+i));
    }

    printf("\nreallocating some memeory\n");
    ptr = (int*)(realloc(ptr,5*sizeof(int)));
    printf("add 5 more elements\n");
    for(int i = 5;i<10;i++){
        scanf("%d",ptr+i);
    }
    
    printf("display all elements\n");
    for(int i = 0;i<10;i++){
        printf("%d\t",*(ptr+i));
    }

    free(ptr);
    



    getchar();
    return 0;
}