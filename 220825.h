#pragma once
#include<stdio.h>

//char, int, float

//void�� �ڷ����� ����.
//�Լ��� main() �Լ��� �ܺο��� ������ �Ǿ�� �մϴ�.
//�Լ��� �Ű������� ���� �ʾƵ� ������ �� �ֽ��ϴ�.
void Function() // () <- �Ű������� ���� ����
{	// <- Function�� ������
	printf("�ȳ��ϼ���?\n");
	printf("�ȳ��ϼ���?\n");
	printf("�ȳ��ϼ���?\n");

	for (int i = 0; i < 3; i++)
	{
		printf("�ȳ��ϼ���?\n");
	}
}	// <- Function�� ��������

//�Ű� ����
//�Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� ���� ����ϴ� ����
//�Ű� ������ �����ϱ� ���ؼ��� �ڷ����� �����־�� �մϴ�.
void Temp(int x)
{
	printf("���� x�� �� : %d\n", x);
}

//�Լ��� �̸��� �ߺ��� ������ �ʽ��ϴ�.
//�Ű������� ���� ���� �����ؼ� ����� �� �ֽ��ϴ�.
void Add(int x, int y)
{
	int result = x + y;
	printf("result�� ���� : %d\n", result);
}

//���� ����
//�Լ� �ܺο��� ����� ������, ��𼭵� ���� �����ϸ�, 
//���α׷��� ����� �� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�.

int count = 0;

void Minus()
{
	count++;
	printf("count ������ �ּ� : %p\n", &count);
	printf("count ������ �� : %d\n", count);
}

//���� ����
//���� ������ Ư���� �����鼭, ���� ������ Ư���� ������ �ִ� ����
void Home()
{
	static int variable = 0;
	variable++;
	printf("variable�� �� : %d\n", variable);
} //<- variable(���α׷��� ����� ������ �޸𸮿� �����ֽ��ϴ�.)
void Area()
{
	int position = 0;
	position++;
	printf("position�� ���� : %d\n", position);
}

//��ȯ���̶�?
//�Լ��� ������ ������ �Լ����� �����ϴ� ��� ��
//void�� �ڷ����� �����Ƿ� ��ȯ���� �ʿ����.
//�ڷ����� �ִ� �Լ��� �ڷ����� �˸´� ������� ������� �Ѵ�.

int Calculator()
{
	return 10;
}

float Divide(float x, float y)
{
	return x / y;
}

//����� ���� �Լ��� ����Ϸ��� main()�Լ����� ������ ȣ���ؾ� �մϴ�.
void main()
{
	//�Լ�
	/*
	//�ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� ����

	//ȣ���ϴ� �Լ��� �̸� ��Ȯ�ϰ� �־��־�� �մϴ�.
	Function(); // <- �Լ��� ȣ��
	Function();
	*/

	//�Ű������� ������ �Լ��� �Լ��� ȣ���� �� �μ��� �־��־�� �մϴ�.
	//�μ���?
	/*
	//�Լ��� ȣ��� �� �Ű������� ������ ���޵Ǵ� ��
	int value = 100;
	int value1 = 200;
	Temp(value); //value <- �μ�
	Temp(value1); //value1 <- �μ�

	Add(10, 20);
	*/

	//���� ����
	/*
	//{}������ ����� ������ {}�������� ����� �� ������, {}�� ����� �Ҹ�˴ϴ�.
	int x = 10;
	{
		int x = 20;
		printf("�߰�ȣ �ȿ� �ִ� x�� �ּ� : %p\n", &x);
	}

	x = 100;
	printf("x�� �ּ� : %p\n", &x);

	count++;
	Minus();

	//���� ����

	Home();
	Home();
	Home();

	Area();
	Area();
	Area();
	*/

	printf("�Լ��� �� : %d\n", Calculator());

	int memory = Calculator();
	printf("memory ������ �� : %d\n", memory);

	printf("������ �Լ��� �� : %f\n", Divide(5, 2));

}
