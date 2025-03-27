//To create a system for students, teachers and staffs in a college using structure
#include<stdio.h>

void actch();
void acstu();
void acstf(); 

// typedef struct student{
//     char name[100];
//     int roll;

// } stu;

// typedef struct teacher{
//     char name[100];
//     char dept[50];
// } tch;

// typedef struct staff{
//     char name[100];
//     char role[50];
// }stf;

int main(){
    // stu s[100];
    // tch t[100];
    // stf st[100];
    int ch;
    FILE *dtbs;
    dtbs=fopen("college.txt","a");


    printf("Enter whose data you want to access:\n 1 for teachers\n 2 for students \n 3 for staffs\n");
    scanf("%d",&ch);
    
    if(ch==1){
       actch();

    }
    else if(ch==2){
        acstu();
    }
    else if(ch==3){
        acstf();
    }
    else {
        printf("Enter correct value");
    }
    fclose(dtbs);
    return 0;
}


void actch(){

    FILE *dtbs;
    char name[100], dept[50];
    int n;
    printf("You are cuurently accessing 'TEACHER' data\n press 1 for date entry\n press 2 for data output\t");
    scanf("%d",&n);
    do{
    if (n==1){
        dtbs=fopen("teacher.txt","a");
        printf("Enter first name:\n");
        scanf("%s",&name);
        fprintf(dtbs,"%s ",name);
        printf("Enter last name:\n");
        scanf("%s",&name);
        fprintf(dtbs,"%s\t",name);
        printf("Enter department:\n");
        scanf("%s",&dept);
        fprintf(dtbs,"%s\n",dept);
        fclose(dtbs);
    }
    else if(n==2){
        dtbs=fopen("teacher.txt","r");
        char ch=fgetc(dtbs);
        fscanf(dtbs,"%s",&name);
        printf("%s", name);
        fscanf(dtbs,"%s",&name);
        printf(" %s", name);
        fscanf(dtbs,"\t%s",&dept);
        fclose(dtbs);
    }
    else {
        printf("Enter correct value");
    }
    printf(" \nTo dd another teacher press1 else press 0:\t");
    scanf("%d",&n);
    }while(n);
}

void acstu(){
    FILE *dtbs;
    dtbs=fopen("student.txt","a");
    char name[100], dept[50];
    int n;
    printf("You are cuurently accessing 'STUDENT' data\n press 1 for date entry\n press 2 for data output");
    scanf("%d",&n);
    do{
    if (n==1){
        dtbs=fopen("student.txt","a");
        printf("Enter first name:\n");
        scanf("%s",&name);
        fprintf(dtbs,"%s ",name);
        printf("Enter last name:\n");
        scanf("%s",&name);
        fprintf(dtbs,"%s\t",name);
        printf("Enter department:\n");
        scanf("%s",&dept);
        fprintf(dtbs,"%s\n",dept);
        fclose(dtbs);
    }
    else if(n==2){
        dtbs=fopen("student.txt","r");
        char ch=fgetc(dtbs);
        fscanf(dtbs,"%s",&name);
        printf("%s", name);
        fscanf(dtbs,"%s",&name);
        printf(" %s", name);
        fscanf(dtbs,"\t%s",&dept);
        fclose(dtbs);
    }
    else {
        printf("Enter correct value");
    }
    printf(" \nTo dd another student press 1 else press 0:\t");
    scanf("%d",&n);
    }while(n);
}

void acstf(){
    FILE *dtbs;
    char name[100], dept[50];
    int n;
    printf("You are cuurently accessing 'STAFF' data\n ress 1 for date entry\n press 2 for data output");
    scanf("%d",&n);
   do{
    if (n==1){
        dtbs=fopen("staff.txt","a");
        printf("Enter first name:\n");
        scanf("%s",&name);
        fprintf(dtbs,"%s ",name);
        printf("Enter last name:\n");
        scanf("%s",&name);
        fprintf(dtbs,"%s\t",name);
        printf("Enter department:\n");
        scanf("%s",&dept);
        fprintf(dtbs,"%s\n",dept);
        fclose(dtbs);
    }
    else if(n==2){
        dtbs=fopen("staff.txt","r");
        char ch=fgetc(dtbs);
        fscanf(dtbs,"%s",&name);
        printf("%s", name);
        fscanf(dtbs,"%s",&name);
        printf(" %s", name);
        fscanf(dtbs,"\t%s",&dept);
        fclose(dtbs);
    }
    else {
        printf("Enter correct value");
    }
    printf(" \nTo dd another staff press 1 else press 0:\t");
    scanf("%d",&n);
    }while(n);
}