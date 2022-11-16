#include <stdio.h>

int main()
{
	int fir, sec, thir, aver;

	printf("정수를 입력하시오 :");
	scanf("%d", &fir);
	printf("정수를 입력하시오 :");
	scanf("%d", &sec);
	printf("정수를 입력하시오 :");
	scanf("%d", &thir);

	aver = (fir + sec + thir) / 3;
	
	printf("평균은 %d입니다. \n", aver);

	return 0;
}
