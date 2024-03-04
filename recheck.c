#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int *create(int num){
    int *ptr;
    
   
   
    ptr = (int*)malloc(num*sizeof(int));
    for (int i =0;i<num;i++){
        scanf("%d",(ptr+i));
    }
    return ptr;
}

void display(int *disptr,int num){
    int *ptrhere;
    int numhere;
    numhere= num;
    ptrhere = disptr;
    for(int i = 0;i<numhere;i++){
        printf("%d\t",ptrhere[i]);
    }
}

int main(){

    int *mainptr;
     int num;
    printf("the number of elements to be added\n");
     scanf("%d",&num);
    mainptr = create(num);

    display(mainptr,num);





    free(mainptr);







    getchar();
    return 0;
}