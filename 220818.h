#pragma once
#include <stdio.h>

void main()
{
	/*
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	*/

	//while��
	//Ư�������� ������ ������ ����Ͽ� �־��� ��ɹ��� �����ϴ� �ݺ���
	/*
	int memory = 5;

	while (memory > 1)
	{
		memory--;
		printf("������ ���Դϴ�.\n");
	}
	*/

	//do while��
	//���ǰ� ������� �� ���� �۾��� ������ ���� ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ���
	/*
	int value = 5;

	do
	{
		printf("������ �����Դϴ�.\n");
	} while (value == 10);
	*/


	//continue��
	//�ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ���
	/*
	for (int i = 1; i <=10 ; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		printf("%d ", i);
	}
	*/

	//�� ��ȯ
	//���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� �� ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� ����

	//�Ϲ��� �� ��ȯ
	//���� �ٸ� �ڷ������� ������ �̷���� �� �������� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ����

	char x = 10;
	short y = 20;

	int sum = x + y;

	int z = 500;
	char temp = z;

	printf("temp�� �� : %d\n", temp);

	//����� �� ��ȯ
	//

	int p0 = 10;
	int p1 = 3;

	float result = (float)p0 / p1;

	printf("result�� ���� : %f\n", result);

	/*
	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("short�� ũ�� : %d\n", sizeof(short));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("long�� ũ�� : %d\n", sizeof(long));
	printf("float�� ũ�� : %d\n", sizeof(float));
	*/
	//int�� long�� ����
	//int�� 32��Ʈ �ü���� 64��Ʈ �ü�������� 4byte�� ũ�⸦ ������.
	//long�� 32��Ʈ �ü�������� 4byte, 64��Ʈ �ü�������� 8byte�� ũ�⸦ ������.
	//��, �������� 64��Ʈ �ü�������� 4byte��.

}