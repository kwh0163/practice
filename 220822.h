#pragma once
#include <stdio.h>

void main()
{
	//�������� ũ��
	/*
	double value = 9.36;
	double x = 10.97;

	//������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.
	double* ptr = &value;

	printf("value�� �� : %lf\n", *ptr);
	printf("ptr ������ ������ ũ�� : %d\n", sizeof(ptr));

	//ptr ������ ����Ű�� �ּҸ� value���� x��� ������ �ּҷ� �����մϴ�.
	ptr = &x;
	printf("ptr�� �� : %lf\n", *ptr);

	*ptr = 20.52;
	printf("ptr�� �� : %lf\n", *ptr);
	*/

	//�迭
	//���� �ڷ����� ������� �̷���� ���� ����
	/*
	int array[5];

	//�迭�� ��� ù ��° ���Ҵ� 0���� ����
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;

	printf("array�� ù ��° �� : %d\n", array[0]);
	printf("array�� �� ��° �� : %d\n", array[1]);
	printf("array�� �� ��° �� : %d\n", array[2]);
	printf("array�� �� ��° �� : %d\n", array[3]);
	printf("array�� �ټ� ��° �� : %d\n", array[4]);

	printf("array�� ũ�� : %d\n", sizeof(array));
	*/

	//�迭�� �ʱ�ȭ
	/*
	//0��° ���(10) 1��° ���(5) 2��° ���(0)
	int room[3] = { 10, 5, 0 };

	//�迭�� ũ�⸦ ���ϴ� ���
	//�迭�� ũ�� / �迭�� �ڷ���
	int size = sizeof(room) / sizeof(int);

	for (int i = 0; i < size; i++)
	{
		printf("room %d��° ��� : %d\n", i, room[i]);
	}
	*/

	//�迭�� ũ�⸦ ������ �� ������, �ʱ�ȭ ��Ͽ� ������ ���� �����Ϸ��� �ڵ����� ������ݴϴ�.
	double team[] = { 5.1, 6.8, 7.7, 49.63, 11.07 };
	printf("team�迭�� ũ�� : %d\n", sizeof(team));

	for (int i = 0; i < sizeof(team) / sizeof(double); i++)
	{
		team[i] = 0;
		printf("%d��° ����� �� : %lf\n", i, team[i]);
	}
	//team[0] -> 5.1
	//team[1] -> 6.8
	//team[2] -> 7.7
	//team[3] -> 49.63
	//team[4] -> 11.07


}