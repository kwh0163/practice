#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//Typedef
/*
//�̹� ���Ǵ� �ڷ����� �ٸ� ���ο� �ڷ������� �������� �� �ֵ��� ���ִ� Ű����

typedef int INT32; //int == INT32

//typedef�� ����ü�� ������ �� _(�̸�)���� �����ϰ�,
//���Ǵ� (�̸�)���� �����Ѵ�.
typedef struct _Player
{
	int x;
	int y;
	char name[20];
	const char* shape;
}Player;
*/

//�����̸� : ��
//�Է°� n�� �־�������, 1���� n������ ���� ���ϴ� ���α׷��� �ۼ����ּ���
void plus()
{
	int n;
	scanf_s("%d", &n);
	int result = 0;

	for (int i = 1; i <= n; i++)
	{
		result += i;
	}

	printf("1���� n������ ���� : %d\n", result);
}

int main()
{
	//Typedef
	/*
	int a = 10;
	INT32 b = 20;

	printf("a�� �� : %d\n", a);
	printf("b�� �� : %d\n", b);

	Player player;
	strcpy(player.name, "Watson");

	printf("player�� �̸� : %s\n", player.name);
	*/


	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j > 0; j--)
		{
			if (i < j) printf(" ");
			else printf("*");
		}
		printf("\n");
	}


	return 0;
}