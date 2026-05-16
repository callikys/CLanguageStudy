#include <stdio.h>

int main()
{
	int num;
	int num1 = 0;
	int result;
	printf("몇개의 정수를 입력할 건가요? ");
	scanf("%d", &num);

	while(num1 < num)
	{
		int num2;
		printf("더해줄 숫자를 입력하세요. ");
		scanf("%d", &num2);
		result += num2;
		num1++;
	}

	printf("result: %d\n", result/num);
	return 0;
}
