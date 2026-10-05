#include<stdio.h>
int main(){
    int pin,sum=0,temp,digit;
    printf("enter 4_digit pin:");
    scanf("%d", &pin);
    temp=pin;
    while(temp>0){
        digit=temp%10;
        sum+=digit;
        temp=temp/10;

    }
   printf("sum of digits=%d\n",sum);
   if(sum>10)
   printf("strong pin");
   else
   printf("weak pin");
return 0;
}