#include <stdio.h>

int main()
{
	int num = 0;
	int result = 0;

	while(num == 0)
	{
		int num1;
		scanf("%d", &num1);

		result += num1;

		if(num1 == 0) num = 1;
	}
	printf("%d\n", result);
	return 0;
}
