#include<stdio.h>
#include<conio.h>
int main()
{
    int x,rev,t,num;
    rev=0;
    printf("enter any number: ");
    scanf("%d", &x);
    num=x;
    while(x!=0)
    {
               t=x%10;
               rev=t+rev*10;
               x=x/10;
               }
               printf("reversed number is %d\n", rev);
               if(rev==num)
               {
                       printf("%d is palindrome number", rev);
                       } else
                       {
                             printf("%d is not palindrome number", rev);
                             }
               getch();
               return 0;
               }
