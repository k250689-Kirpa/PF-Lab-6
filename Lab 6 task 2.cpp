#include<stdio.h>

int main()
{
	int n;
	int a;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i=2; i <= n-1; i++)
	{
		if(n%i == 0) {
			a = 1;
			break;
		}
		else {
			a = 0;
		}
		
    }
		
		if(a == 1) {
			printf("The number is Composite\n");
		}
		else if(a == 0) {
			printf("The number is Prime");
    	}
		
	
	return 0;
}
