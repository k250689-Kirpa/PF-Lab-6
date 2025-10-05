#include<stdio.h>
int main() 
{
	int num, originalNum;
	int rem;
	int rev = 0;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	originalNum = num;
	
	for(int i=0; num > 0; i++)
	{
		
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num/10;
	}
	
	
	if(originalNum == rev)
	{
		printf("The number is Palindrome");
	}
	else 
	{
		printf("The number is not a palindrome");
	}
	return 0;
}
