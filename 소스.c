#include<stdio.h>

void main()
{
	//������ �迭
	/*
	//�迭�� ��ҷ� ������ ������ ������ �迭

	int num1 = 10, num2 = 20, num3 = 30;

	int* array[3] = { &num1, &num2, &num3 };

	for (int i = 0; i < 3; i++)
	{
		printf("array �������� �� : %p\n", array[i]);
		printf("array �����Ͱ� ����Ű�� �� : %d\n", *array[i]);
	}
	
	const char* data[3] = { "Apple", "Banana", "Melon" };

	data[0] = "Something";

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", data[i]);
	}
	*/

	//ASCII �ڵ��
	/*
	//�̱� ǥ��ȭ ��ȸ�� ������ ���� ��ȯ�� ǥ�� �ڵ�� ���� 
	//���ĺ��� ����ϴ� ��ǥ���� ���� ���ڵ�

	if ('A' < 'B')
	{
		for (int i = 0; i < 26; i++)
		{
			char alphabet = 'a' + i;
			char Alphabet = 'A' + i;
			printf("%c %c\n", Alphabet, alphabet);
		}
	}
	*/

	//�����
	/*
	//�� ���� ������ �Է¹޽��ϴ�.
	//A ������ B ������ ����� ��� ���

	int A;
	int	B;

	scanf_s("%d%d", &A, &B);

	for (int i = 1; i <= A && i <= B ; i++)
	{
		if (A % i == 0 && B % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	*/

	//¦�� ������
	//�ڱ� �ڽ��� ������ ���� ����� ������ ��
	//�ڱ� �ڽ��� �Ǵ� ���� ������ ���Ѵ�.

	int value;
	int sum = 0;

	scanf_s("%d", &value);

	for (int i = 1; i < value; i++)
	{
		if (value % i == 0)
		{
			sum += i;
		}
	}
	if (sum == value)
	{
		printf("������ �Դϴ�.\n");
	}
	else
	{
		printf("�������� �ƴմϴ�.\n");
	}





}