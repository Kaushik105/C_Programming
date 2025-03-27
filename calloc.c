//Allocate memory for 500 integers and store natural number upto 500
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int *) calloc(500, sizeof(int));
    for(int i=0;i<500;i++){
        ptr[i]=i;
        
    }
    for(int i=0;i<500;i++){
        printf("%d\t",ptr[i]);
    }
}