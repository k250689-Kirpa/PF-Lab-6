#include<stdio.h>
int main () {
	
	int factorial = 1;
	int a;
	
	printf("Enter the value of a: ");
	scanf("%d", &a);
	
	for (int i = 1; i <= a; i++)
	
	{
		
		factorial = factorial*i;
		
	}
	
    
    printf("The factorial value is %d", factorial);
    return 0;
}
