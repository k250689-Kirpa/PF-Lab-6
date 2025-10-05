#include<stdio.h>
int main()
{
	int n;
	char choice;
	
	do
	{
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i=1; i <=10; i++)
	{
		printf("%d * %d = %d\n" ,n, i, n * i);
	}
	
	printf("Do you want to print another table? (Y/N): ");
	scanf(" %c", &choice);
	
    }
	
	while(choice == 'Y' || choice == 'y');
	
		printf("Program terminated");
	
	return 0;
}
