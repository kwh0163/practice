#pragma once
#include <stdio.h>

void main()
{
	//������ ����
	/*
	int array[5] = {10, 15, 20, 25, 30};

	printf("�迭�� �ּ� : %p\n", array);

	//pointer������ array�� �����ּҸ� ����ŵ�ϴ�.
	int* pointer = array;

	printf("������ ������ �� : %p\n", pointer);
	printf("������ ������ ����Ű�� �� : %d\n", *pointer);

	//pointer������ ����Ű�� �ڷ����� ũ�⸸ŭ �����մϴ�.
	pointer = pointer + 1;
	printf("������ ������ �� : %p\n", pointer);
	printf("������ ������ ����Ű�� �� : %d\n", *pointer);

	pointer += 2;
	*pointer = 100;
	printf("�迭�� 4��° ��� : %d\n", array[3]);
	*/

	//�ִ񰪰� �ּڰ� ���ϱ�
	/*
	//data��� �迭 �ȿ��� �ִ� : 66
	//data��� �迭 �ȿ��� �ּڰ� : 1

	int max = 0;
	int min = 100001;

	int data[5] = { 10,5,66,1,2 };

	for (int i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
		if (data[i] < min)
		{
			min = data[i];
		}
	}

	printf("�迭�� �ִ� ������ �ִ� : %d\n�迭�� �ִ� ������ �ּڰ� : %d\n", max, min);
	*/

	//��� ���� ������
	/*
	//����� ����Ű�� �������̸�, ������ ��ü�� ����� �ƴմϴ�.

	int value = 100;
	int x = 300;
	const int* ptr = &value;

	//������ ������ ����Ű�� ���� ������ �� �����ϴ�.
	//*ptr = 100;

	//��� ���� �����ʹ� ����Ű�� ������ ���ȭ���� �ʽ��ϴ�.
	value = 200;

	//������ ����Ű�� ���� ����� �� �ֽ��ϴ�.
	printf("ptr�� �����ϴ� �� : %d\n", *ptr);

	//��� ���� �������� ��� �ٸ� ������ �ּҴ� ������ �� �ֽ��ϴ�.
	ptr = &x;


	printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	*/

	//2���� �迭
	//�迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭

	//�տ� �ִ� �迭�� ���� ����, �ڿ� �ִ� �迭�� ���� ����
	//3�� 2��
	int team[3][2] =
	{
		{0, 5},
		{10, 4},
		{9, 1}
	};

	//2�� for���� �̿��ؼ� 2���� �迭�� ���� ���� ���
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d�� ° ���� %d �� ° ���� �� : %d\n", i, j, team[i][j]);
		}
	}

}