#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
scanf("%d %d",&a,&b);
for(i=1;i<=a;i++)
{
printf("%d*%d=%d ",i,b,b*i);
}
getch();
}
