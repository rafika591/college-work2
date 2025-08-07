#include <stdio.h>
int isPalindrome(int num){
 int temp=num,rev=0;
 while(temp>0){
     rev=rev*10+temp%10;
     temp/=10;
 }
return  num==rev;
}
int main(){
    int low;
    int up;
    printf("Enter low:");
    scanf("%d",&low);
    printf("Enter up:");
    scanf("%d",&up);
    for(int i=low;i<=up;i++){
        if(isPalindrome(i)){
            printf("%d\t",i);
        }
    }
    return 0;
}
