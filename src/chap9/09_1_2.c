#include <stdio.h>
double CelToFah(double num)
{
	return 1.8 * num + 32;
}

double FahToCel(double num)
{
	return (num - 32) / 1.8;
}

int main()
{
	double Cel, Fah;
	printf("섭씨 온도를 입력하세요.\n");
	scanf("%lf", &Cel);
	printf("섭씨 -> 화씨 : %f\n", CelToFah(Cel));
	printf("화씨 온도를 입력하세요.\n");
	scanf("%lf", &Fah);
	printf("화씨 -> 섭씨 : %f\n", FahToCel(Fah));

	return 0;
}
