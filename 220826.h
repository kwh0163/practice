#pragma once
#include<stdio.h>

//�Լ��� ����
//ȣ���� �Լ��� �����Ϸ����� �̸� �˷��ִ� ����
//���� �н� ������(O), ��Ƽ �н� ������
void Function(const char* name, void* value);

void Integer(int x)
{
	printf("Integer �Լ��� x�� : %d\n", x);
}

void Decimal(float x)
{
	printf("Decimal �Լ��� x�� : %f\n", x);
}

void Character(char x)
{
	printf("Character �Լ��� x�� : %c\n", x);
}

void Swap(int* x, int* y)
{
	int temp = *y;
	*y = *x;
	*x = temp;
}

void Plus(int x, int y)
{
	printf("%d + %d = %d\n", x, y, x + y);
}

void Minus(int x, int y)
{
	printf("%d - %d = %d\n", x, y, x - y);
}

void Mult(int x, int y)
{
	printf("%d * %d = %d\n", x, y, x * y);
}

void Div(int x, int y)
{
	printf("%d / %d = %f\n", x, y, (float)x / y);
}

void main()
{
	//����(void) �����Ͷ�?
	/*
	//�ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� ������
	int value = 10;
	void* ptr = &value;

	//���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� ����

	*(int *)ptr = 20;
	printf("ptr�� ����Ű�� �� : %d\n", *(int*)ptr);

	//���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű��
	//������ �ڷ������� �� ��ȯ�� ����� ��

	float decimal = 10.5;
	ptr = &decimal;
	*(float*)ptr = 20.5;
	printf("ptr�� ����Ű�� �� : %f\n", *(float*)ptr);

	//���� �Լ��� �Է��ϴ� ������(����)�� ��µǵ��� �ϰ� ���� ��
	//char int float(�Ǽ�)
	//Integer(50);
	//Character('A');
	//Decimal(10.5);
	int A = 10;
	float B = 99.6;
	char C = 'R';
	Function("int", &A);
	Function("float", &B);
	Function("char", &C);
	*/

	//�� ���� ������ �� �ٲٱ�
	//�ϳ��� �ӽ� ������ ���� �ű⿡ ���� �����ߴٰ� �ű�� ��
	int A = 10;
	int B = 20;
	printf("���� A�� �� : %d, ���� B�� �� : %d\n", A, B);


	Swap(&A, &B);

	printf("���� A�� �� : %d, ���� B�� �� : %d\n", A, B);

	//���ϱ� �Լ�
	Plus(5, 3);

	//���� �Լ�
	Minus(7, 6);

	//���� �Լ�
	Mult(4, 8);

	//������ �Լ�
	Div(8, 2);



}

void Function(const char* name, void* value)
{
	if (name == "int")
	{
		printf("%d\n", *(int*)value);
	}
	else if (name == "float")
	{
		printf("%f\n", *(float*)value);
	}
	else if (name == "char")
	{
		printf("%c\n", *(char*)value);
	}
}
