

#include<stdio.h>
#include<conio.h>
void main()
{
long int r, n,count=0;
printf("enter no");
scanf("%ld",&n);
while(n)
{
r=n%10	;
count++;
n=n/10;
}
printf("%d",count);

getch();
}