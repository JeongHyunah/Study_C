#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// <summary>
/// �� ��	: �������� ���� C ���α׷���, é��5 ���� Ǯ��
/// ������¥	: 2023-08-14
/// �ۼ���	: JeongHyunah
/// </summary>

int Chapter5(void) {
	//���� 05-1 (1)
	int MX, PY, PX, MY;	//������� -X, +Y(��2��и�), +X, -Y(��4��и�)
	printf("�� ����� x, y ��ǥ : ");
	scanf("%d %d", &MX, &PY);
	printf("�� �ϴ��� x, y ��ǥ : ");
	scanf("%d %d", &PX, &MY);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n\n", (MX - PX) * (PY - MY));

	//���� 05-1 (2)
	double num1, num2;
	printf("�� ���� �Ǽ��� �Է��ϼ��� : ");
	scanf("%lf %lf", &num1, &num2);
	printf("%lf + %.lf = %lf\n", num1, num2, num1 + num2);
	printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
	printf("%lf X %lf = %lf\n", num1, num2, num1 * num2);
	printf("%lf / %lf = %lf\n\n", num1, num2, num1 / num2);

	//���� 05-1 (3)
	/*
		1) 1����Ʈ���� ��� ���� ǥ���� �� ����, 0~127����
		2) 1�� ����
		3) 32�� ���̳�
	*/

	//���� 05-1 (4)
	int num;
	printf("�ƽ�Ű �ڵ� ���� ������ �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("%c\n\n", num);

	//���� 05-1 (5)
	printf("���ĺ� ���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("%d", num);
}