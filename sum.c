#include<stdio.h>
int main()
{
long long int n;
unsigned long long int sum=0;
scanf("%lld",&n);
for(int i=0;i<=n;i++)
{
	sum=sum+i;
}
printf("%llu",sum);

}
