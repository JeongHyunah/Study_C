#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// <summary>
/// �� ��	: �������� ���� C ���α׷���, é��3 ���� Ǯ��
/// ������¥	: 2023-08-14
/// �ۼ���	: JeongHyunah
/// </summary>

int Chapter3(void) {
	int num1, num2, num3;
	//���� 03-1 (1)
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);
	printf("%d - %d = %d\n%d X %d = %d\n\n", num1, num2, num1 - num2, num1, num2, num1 * num2);

	//���� 03-1 (2)
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d X %d + %d = %d\n\n", num1, num2, num3, num1 * num2 + num3);

	//���� 03-1 (3)
	printf("�ϳ��� ������ �Է��ϼ��� : ");
	scanf("%d", &num1);
	printf("%d\n\n", num1 * num1);

	//���� 03-1 (4)
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);
	printf("�� : %d, ������ : %d\n\n", num1 / num2, num1 % num2);

	//���� 03-1 (5)
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("(%d - %d) X (%d + %d) X (%d %% %d) = %d",num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
}