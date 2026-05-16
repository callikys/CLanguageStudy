#include <stdio.h>

int main()
{
	int num1;
	int num2 = 1;
	scanf("%d", &num1);

	while(num2 <= num1)
	{
		printf("%d\n", num2 * 3);
		num2++;
	}

	return 0;
}
