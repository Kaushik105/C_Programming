//Salting uding a string and salt is 123
#include<stdio.h>
#include<string.h>
void printstrng( char arr[]);
char salt(char arr[]);
void slice(char arr[],int n, int m); // New program but only function to slice from index n to m
int main(){
    char pass[100]="HelloWorld";
   // scanf("%s", &pass);
    //salt(pass);
    //printstrng(pass);
    slice(pass, 3,6);
}

void slice(char arr[], int n, int m){
    char slice[100];
    int j=0;
    for( int i=n; i<=m;i++,j++){
        slice[j]=arr[i];
    }
    puts(slice);
}


char salt( char arr[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,arr);
    strcat(newpass,salt);
    puts(newpass);
}

void printstrng(char arr[]){
    for(int i=0;arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
    
}