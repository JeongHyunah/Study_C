#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// <summary>
/// �� ��	: �������� ���� C ���α׷���, é��7 ���� Ǯ��
/// ������¥	: 2023-08-14
/// �ۼ���	: JeongHyunah
/// </summary>

int Chapter7(void) {
	//���� 07-1 (1)
	int num, count, input, total;
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &num);
	count = 0;
	while (num > count) {
		printf("Hello World! ");
		count++;
	}
	printf("\n\n");
	
	//���� 07-1 (2)
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &num);
	count = 1;
	while (num >= count) {
		printf("%d ", 3 * count);
		count++;
	}
	printf("\n\n");

	//���� 07-1 (3)
	count = 0;
	while (num != 0) {
		printf("������ �Է��ϼ���(���Ḧ ���Ѵٸ� 0�� �Է��ϼ���) : ");
		scanf("%d", &num);
		count += num;
	}
	printf("�Էµ� ��� ������ �� : %d", count);
	printf("\n\n");

	//���� 07-1 (4)
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &num);
	count = 9;
	while (count >= 1) {
		printf("%d * %d = %d\n", num, count, num * count);
		count--;
	}
	printf("\n\n");

	//���� 07-1 (5)
	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? : ");
	scanf("%d", &num);
	count = 0, input = 0, total = 0;
	while (num > count) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &input);
		total += input;
		count++;
	}
	printf("�Էµ� ������ ��� �� : %lf", (double)total / (double)num);
	printf("\n\n");

	//���� 07-2 (1)
	count = 0;
	total = 0;
	while (count < 5) {
		printf("5���� ������ �Է��ϼ���(0�̳� ���� ������ �Է��� ��� �ٽ� �Է��ؾ� �մϴ�) : ");
		scanf("%d", &num);
		while (num >= 1) {
			total += num;
			count++;
			break;
		}
	}
	printf("�Էµ� ���� 5���� ��� ���� �� : %d", total);
	printf("\n\n");

	���� 07-2 (2)
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

	//���� 07-3 (1)
	total = 0, num;
	while (num != 0) {
		printf("���� �Է�(0 to quit) : ");
		scanf("%d", &num);
		total += num;
	}
	printf("�հ� : %d\n", total);

	//���� 07-3 (2)
	num = 0, total = 0;
	do {
		total += num % 2 == 0 ? num : 0;
		num++;
	} while (num <= 100);
	printf("0�̻� 100������ ���� �� ¦���� �� : %d", total);
	printf("\n\n");

	//���� 07-3 (3)
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

	//���� 07-4 (1)
	printf("�� ���� ������ �Է��ϼ���, �� ���� ���� ���� ��� ���Ұ̴ϴ� : ");
	scanf("%d %d", &num, &count);
	total = 0;
	for (int i = num; i <= count; i++) {
		total += i;
	}
	printf("�� �� ���� ���� ��� ���� �� : %d", total);
	printf("\n\n");

	//���� 07-4 (2)
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &num);
	total = 1;
	for (int i = 1; i <= num; i++) {
		total *= i;
	}
	printf("%d! = %d", num, total);
}