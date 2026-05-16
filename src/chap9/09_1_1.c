#include <stdio.h>

int SelectMinimumNumber(int num1, int num2, int num3)
{
	int min = 0;
	if(num1 < num2) min = num1;
	else min =num2;

	if(min > num3) min = num3;
	return min;
}

int SelectMaximumNumber(int num1, int num2, int num3)
{
	int max = 0;
	if(num1 > num2) max = num1;
	else max = num2;

	if(max < num3) max = num3;
	return max;
}

int ReadNum()
{
	int num;
	scanf("%d", &num);
	return num;
}

int main(void)
{
	int num1, num2, num3;
	printf("비교할 세개의 숫자를 입력해주세요.\n");
	num1 = ReadNum();
	num2 = ReadNum();
	num3 = ReadNum();

	printf("가장 큰 수 : %d\n", SelectMaximumNumber(num1, num2, num3));
	printf("가장 작은 수 : %d\n", SelectMinimumNumber(num1, num2, num3));
	return 0;
}
