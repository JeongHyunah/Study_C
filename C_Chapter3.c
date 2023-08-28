#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// <summary>
/// 제 목	: 윤성우의 열혈 C 프로그래밍, 챕터3 문제 풀이
/// 수정날짜	: 2023-08-14
/// 작성자	: JeongHyunah
/// </summary>

int Chapter3(void) {
	int num1, num2, num3;
	//문제 03-1 (1)
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	printf("%d - %d = %d\n%d X %d = %d\n\n", num1, num2, num1 - num2, num1, num2, num1 * num2);

	//문제 03-1 (2)
	printf("세 개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d X %d + %d = %d\n\n", num1, num2, num3, num1 * num2 + num3);

	//문제 03-1 (3)
	printf("하나의 정수를 입력하세요 : ");
	scanf("%d", &num1);
	printf("%d\n\n", num1 * num1);

	//문제 03-1 (4)
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	printf("몫 : %d, 나머지 : %d\n\n", num1 / num2, num1 % num2);

	//문제 03-1 (5)
	printf("세 개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("(%d - %d) X (%d + %d) X (%d %% %d) = %d",num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
}