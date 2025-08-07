#include <stdio.h>
int sumOfNum(int m,int n){
           int sum=0;
   for(int i=m;i<=n;i++){
       if(i%3==0 && i%5==0){
           sum+=i;
       }
   }
    return sum;
}
int main(){
    int m;
    int n;
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d",sumOfNum(m,n));
    return 0;
}
