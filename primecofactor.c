#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,prime;
    printf("Enter number: ");
    scanf("%d", &a);
    for(int i=1; i<a; i++){
        if(a%i==0){
            c=i%2;
            if(c==0){
                if(i!=2)
                    continue;
                else
                printf("%d\t", i);    
            }
            else{
                prime=1;
                for(int j=2; j<=sqrt(i); j++){
                    if(i%j == 0){
                        prime = 0;
                        break;
                    }
                }
                if(prime && i!=a){
                    printf("%d\t", i);
                }
                
            }
        }
    }
    return 0;
}