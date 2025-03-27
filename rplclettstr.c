//To replace lowercase letters to uppercase and vice-versa in a string
#include<stdio.h>

int main(){
    char str[]="KaAuSHik ChoWDHurY";

    puts(str);
    for(int i=0;str[i]!='\0';i++){

        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-'a'+'A';
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]-'A'+'a';
        }

    }
    puts(str);
}