/*
Enter the string: study
s
st
stu
stud
study
*/
#include<stdio.h>

int main(){
    int x=0;
    char a[10];
    printf("Enter the string: ");
    gets(a);
    while(a[x]!='\0'){
        x++;
    }
    for(int j=0; j<x; j++){
        //variant
        // for(int k=1;k<x-j;k++){
        //     printf(" ");
        // }
        for(int i=0; i<=j; i++){
        printf("%c",a[i]);
    }
    printf("\n");
    } 
}