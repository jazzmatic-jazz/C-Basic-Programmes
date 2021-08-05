#include<stdio.h>

int check_palindrome(int a)//151 num value is going in a getting interchanged
{

   static int reverse_num=0,rem;

   if(a!=0){
      rem=a%10;
      reverse_num=reverse_num*10+rem;
      check_palindrome(a/10);
   }

   return reverse_num;
}
int main(){
   int num, reverse_num;

   printf("Enter a number: ");
   scanf("%d",&num);//151

   reverse_num = check_palindrome(num);//151

   if(num==reverse_num)
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);

   return 0;
}
