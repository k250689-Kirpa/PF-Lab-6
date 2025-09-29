#include<stdio.h>
int main()
{
	int num, rem;
	int rev = 0;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	for (int i = 0; num > 1; i++)
	{
		rem = num%10;
		rev = rev*10 + rem;
		
		num = num/10;
	}
	
	printf("The reverse for your number is %d", rev);
	
	return 0;
}