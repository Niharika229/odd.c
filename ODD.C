#include<stdio.h>
#include<conio.h>
void main()
{
int s,count=0,i=0;
long int n;
clrscr();
printf("Enter n value: ");
scanf("%ld",&n);

while(n!=0)
{
s=n%10;
n=n/10;
if(s%2==0)
{
count++;
}
else
{
i++;
}
}
printf("No. of even digits:%d",count);
printf("\nNo. of odd digits:%d",i);
getch();
}
