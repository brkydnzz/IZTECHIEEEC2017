#include <stdio.h>
int main()
{
	int number1,number2,result;
	printf("First number:\n");
	scanf("%d",&number1);
	
	printf("Second number:\n");
	scanf("%d",&number2);
	
	result = number1 - number2;
	
	printf("%d-%d=%d",number1,number2,result);
	return 0;
}
