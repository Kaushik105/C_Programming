/*
Enter the string: study
s
st
stu
stud
study
stud
stu
st
s
*/
#include<stdio.h>

int main(){
    char c[10];
    int s=0;
    printf("Enter the string: ");
    gets(c);
    while(c[s]!='\0'){
        s++;
    }
    for(int j=0; j<s; j++){
        for(int i=0; i<=j; i++){
        printf("%c",c[i]);
    }
    printf("\n");
    }
    for(int j=s; j>0; j--){
        for(int i=0; i<j-1; i++){
        printf("%c",c[i]);
    }
    printf("\n");
    }

}