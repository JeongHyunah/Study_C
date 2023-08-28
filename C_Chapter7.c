#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// <summary>
/// 제 목	: 윤성우의 열혈 C 프로그래밍, 챕터7 문제 풀이
/// 수정날짜	: 2023-08-14
/// 작성자	: JeongHyunah
/// </summary>

int Chapter7(void) {
	//문제 07-1 (1)
	int num, count, input, total;
	printf("정수 하나를 입력하세요 : ");
	scanf("%d", &num);
	count = 0;
	while (num > count) {
		printf("Hello World! ");
		count++;
	}
	printf("\n\n");
	
	//문제 07-1 (2)
	printf("정수 하나를 입력하세요 : ");
	scanf("%d", &num);
	count = 1;
	while (num >= count) {
		printf("%d ", 3 * count);
		count++;
	}
	printf("\n\n");

	//문제 07-1 (3)
	count = 0;
	while (num != 0) {
		printf("정수를 입력하세요(종료를 원한다면 0을 입력하세요) : ");
		scanf("%d", &num);
		count += num;
	}
	printf("입력된 모든 정수의 합 : %d", count);
	printf("\n\n");

	//문제 07-1 (4)
	printf("정수 하나를 입력하세요 : ");
	scanf("%d", &num);
	count = 9;
	while (count >= 1) {
		printf("%d * %d = %d\n", num, count, num * count);
		count--;
	}
	printf("\n\n");

	//문제 07-1 (5)
	printf("몇 개의 정수를 입력하시겠습니까? : ");
	scanf("%d", &num);
	count = 0, input = 0, total = 0;
	while (num > count) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &input);
		total += input;
		count++;
	}
	printf("입력된 정수의 평균 값 : %lf", (double)total / (double)num);
	printf("\n\n");

	//문제 07-2 (1)
	count = 0;
	total = 0;
	while (count < 5) {
		printf("5개의 정수를 입력하세요(0이나 음의 정수를 입력한 경우 다시 입력해야 합니다) : ");
		scanf("%d", &num);
		while (num >= 1) {
			total += num;
			count++;
			break;
		}
	}
	printf("입력된 정수 5개를 모두 합한 값 : %d", total);
	printf("\n\n");

	문제 07-2 (2)
	count = 1;
	num = 0;
	while (count < 6) {
		num = 1;
		while (num < count) {
			printf("O");
			num++;
		}
		printf("*");
		printf("\n");
		count++;
	}
	printf("\n\n");

	//문제 07-3 (1)
	total = 0, num;
	while (num != 0) {
		printf("정수 입력(0 to quit) : ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계 : %d\n", total);

	//문제 07-3 (2)
	num = 0, total = 0;
	do {
		total += num % 2 == 0 ? num : 0;
		num++;
	} while (num <= 100);
	printf("0이상 100이하의 정수 중 짝수의 합 : %d", total);
	printf("\n\n");

	//문제 07-3 (3)
	num = 2; count = 0;
	do {
		count = 1;
		do {
			printf("%d X %d = %d\n", num, count, num * count);
			count++;
		} while (count < 10);
		printf("\n");
		num++;
	} while (num < 10);
	printf("\n\n");

	//문제 07-4 (1)
	printf("두 개의 정수를 입력하세요, 두 수의 사이 값을 모두 더할겁니다 : ");
	scanf("%d %d", &num, &count);
	total = 0;
	for (int i = num; i <= count; i++) {
		total += i;
	}
	printf("두 수 사이 값을 모두 더한 값 : %d", total);
	printf("\n\n");

	//문제 07-4 (2)
	printf("정수 하나를 입력하세요 : ");
	scanf("%d", &num);
	total = 1;
	for (int i = 1; i <= num; i++) {
		total *= i;
	}
	printf("%d! = %d", num, total);
}