#include<stdio.h>
void  Evaluate(int A[10]); 
int main()
{
	int n[10];
	int i;
	Evaluate(n);
	for(i=0;i<10;i++)
	{
		printf("%d\t",n[i]);
	}
}
void  Evaluate(int A[10])
{
	int a;
	for(a=0;a<10;a++)
	{
		A[a]=a;
	}
}
