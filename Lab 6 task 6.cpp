#include<stdio.h>
int main()
{

	int even = 0;
	int odd = 0;
	
	for(int i=1; i <= 20; i++)
	{
		if(i%2 == 0) {
			even = even + i;
		}
	}
	printf("The sum for Even numbers is %d\n", even);
	
	for(int j=1; j <= 20; j++)
	{
		if(j%2 != 0)
		{
			odd = odd + j;
		}
	}
	printf("The sum for Odd numbers is %d", odd);
	
	return 0;
}

    
    
