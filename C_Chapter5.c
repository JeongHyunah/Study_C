#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// <summary>
/// 제 목	: 윤성우의 열혈 C 프로그래밍, 챕터5 문제 풀이
/// 수정날짜	: 2023-08-14
/// 작성자	: JeongHyunah
/// </summary>

int Chapter5(void) {
	//문제 05-1 (1)
	int MX, PY, PX, MY;	//순서대로 -X, +Y(제2사분면), +X, -Y(제4사분면)
	printf("좌 상단의 x, y 좌표 : ");
	scanf("%d %d", &MX, &PY);
	printf("우 하단의 x, y 좌표 : ");
	scanf("%d %d", &PX, &MY);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n\n", (MX - PX) * (PY - MY));

	//문제 05-1 (2)
	double num1, num2;
	printf("두 개의 실수를 입력하세요 : ");
	scanf("%lf %lf", &num1, &num2);
	printf("%lf + %.lf = %lf\n", num1, num2, num1 + num2);
	printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
	printf("%lf X %lf = %lf\n", num1, num2, num1 * num2);
	printf("%lf / %lf = %lf\n\n", num1, num2, num1 / num2);

	//문제 05-1 (3)
	/*
		1) 1바이트에서 모든 수를 표현할 수 있음, 0~127까지
		2) 1씩 증가
		3) 32씩 차이남
	*/

	//문제 05-1 (4)
	int num;
	printf("아스키 코드 값을 정수로 입력하세요 : ");
	scanf("%d", &num);
	printf("%c\n\n", num);

	//문제 05-1 (5)
	printf("알파벳 문자 하나를 입력하세요 : ");
	scanf("%d", &num);
	printf("%d", num);
}