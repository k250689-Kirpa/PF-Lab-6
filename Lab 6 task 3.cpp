#include<stdio.h>
int main ()
{
	int user_password = 250706;
	int password;
	
	do
	{
	
		printf("Enter password:");
		scanf("%d", &password);
		
		if(password != user_password)
		{
			printf("Incorrect password!!! \n");
		}
		
		else
		{
			printf("Correct password");
			break;
		}
    } while (user_password != password );
    
    return 0;
	
}