#include <stdio.h>
int NumberOfCarries(int num1,int num2){
   int carry=0,count=0;
   while(num1>0 && num2>0){
       int digSum=num1%10+num2%10+carry;
       if(digSum>9){
           carry=digSum-9;
           count++;
       }
       num1/=10;
       num2/=10;
   }
  return count;
}
int main(){
    int num1;
    int num2;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    printf("%d",NumberOfCarries(num1,num2));
    return 0;
}
