#include<stdio.h>
#include<conio.h>
int main()
{
int num,rev=0,rem;
clrscr();
printf("\n Enter number");
scanf("%d",&num);
while(num>=1)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("The reverse number is %d",rev);
getch();
return 0;
}
