//To remove blank spaces in a string
#include<stdio.h>

int main(){
    char str[]="kaus hik chowd hury";
    int k=0;
    puts(str);

    for(int i=0; str[i]!='\0';i++){


        if(str[i]!=' '){            
            str[k]=str[i];
            k++;
            }
        }
    str[k]='\0';
    puts(str);
    return 0;
}