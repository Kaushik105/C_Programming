//To find numbers of a vowels in a string in a file and replace the string with the number
#include<stdio.h>

int countvwl();

int main()
{
    FILE *fptr;
    char ch;
    int c=0;
    // fptr=fopen("test.txt","r");
    // ch=fgetc(fptr);
    //  while(ch!=EOF){
    //     printf("%c",ch);
    //     ch = fgetc(fptr);
    // }       
    c=countvwl();
    printf("\n \t%d",c);
    // fclose(fptr);
    fptr=fopen("test.txt","a");
    fprintf(fptr,"%d",c);
    fclose(fptr);
    return 0;
}

int countvwl(){
    FILE *fptr;
    fptr=fopen("test.txt","r");
    char ch;
    int c=0;
    ch=fgetc(fptr);
    while(ch!=EOF){
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
            c++;
        }
         ch = fgetc(fptr);
    }
    fclose(fptr);
    return c;
}