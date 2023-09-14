#include <stdio.h>

int main()
{	
	int age;
	printf("Enter age: ");
	scanf("%d", &age);
	if(age > 20 && age< 30)
	{	printf("Your age is %d\n", age);
		printf("Work for me\n");
	}
	else
	{	
		printf("Your age is: %d\n",age);
        	printf("Go home\n");
	}

	return (0);
}
