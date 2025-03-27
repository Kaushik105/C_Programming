//Count the highest frequency character in a string

#include<stdio.h>

int main(){
    char str[]= "kaushik chowdhury";
    int count[256]={0};
    int maxfreq=0;
    char maxchar;

    for(int i=0;str[i]!='\0';i++){
        count[str[i]]++;
    }

    for(int i=0;i<256;i++){
        if(count[i]>maxfreq){
            maxfreq=count[i];
            maxchar=i;
        }
    }
    printf("the maximum frequency is %d and the characater is %c",maxfreq,maxchar);
    return 0;

    
}
