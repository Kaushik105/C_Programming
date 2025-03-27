#include<stdio.h>


int main(){
    FILE *fptr;
    char ch;
    fptr=fopen("test.txt","a"); // modes are "w", "r", "a"
 

    //Taking outputn( reading a file)
    // fscanf(fptr,"%c",&ch);
    // printf("%c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("%c\n", ch); 
    // fscanf(fptr,"%c",&ch);
    // printf("%c\n", ch);
    // fclose(fptr);

    //Giving input (Writing in a file)
    fprintf(fptr, "%c", 'A');
}

// int ch;
//     FILE *fptr;
//     fptr=fopen("test.txt", "r");
//     if(fptr==NULL){
//         printf("The file doesn't exist");
//     }
//     while(ch!=EOF){
//         ch = fgetc(fptr);
//         printf("%c",ch);
//     }