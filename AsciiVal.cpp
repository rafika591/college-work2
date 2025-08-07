#include <stdio.h>
void asciiVal(int num[]){
    for(int i=0;i<4;i++){
        if(num[i]>=65 && num[i]<=90){
            printf("%c",num[i]);
        }
        else if(num[i]>=97 && num[i]<=122){
            printf("%c",num[i]-32);
        }
        else{
            printf("%d is not a valid input",num[i]);
        }
    }
    printf("\n");
}
int main(){
    int num[4];
    printf("Enter 4 elements:");
    for(int i=0;i<4;i++){
        scanf("%d",&num[i]);
    }
   asciiVal(num);
   return 0;
}
