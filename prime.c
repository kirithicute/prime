#include<stdio.h>
#include<conio.h>
long prime(long m,long n)
{
long i;
for(i=m;i>=2;i--)
{
if(n%i==0)
return 0;
}
return 1;
}
void main()
{
long i,range;
long count=1;
double x;
printf("Enter the range: ");
scanf("%ld\n",&range);
for(i=3;i<range;i++)
{
x=sqrt(i);
count+=prime(floor(x),i);
}
printf("\n Total number of prime numbers are %ld",count);
getch();
}
