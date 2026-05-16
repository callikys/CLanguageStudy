#include <stdio.h>

int main()
{
	int num1;
	int num2 = 9;
	scanf("%d", &num1);

	while(num2>0)
	{
		printf("%d x %d = %d\n", num1, num2, num1 * num2);
		num2--;
	}

	return 0;
}
