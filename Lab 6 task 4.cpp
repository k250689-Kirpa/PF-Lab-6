#include<stdio.h>
int main() 
{
	
	int a = 0;
	int b = 1;
	int n;
	int sum = 0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The fabonacci series: ");
	
	for(int i=1; i <= n; i++)
	{
		printf("\n%d", a);
		sum = a + b;
		a = b;
		b = sum;
		
		
		

    }
    
    return 0;
}
