#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void RSP()
{

	int IsGameOver = 0;
	srand((unsigned int)time(NULL));
	int p;
	int e;
	while (!IsGameOver)
	{
		printf("1 - ����\n2 - ����\n3 - ��\n");
		scanf_s("%d", &p);
		e = rand();
		e = (int)e % 3;
		switch (e)
		{
		case 1:
			printf("�� : ����\n");
			break;
		case 2:
			printf("�� : ����\n");
			break;
		case 3:
			printf("�� : ��\n");
			break;
		}
		if (p == e)
		{
			printf("draw\n");
		}
		else if (p == 1 && e == 3)
		{
			printf("player win\n");
		}
		else if (p == 3 && e == 1)
		{
			printf("player lose\n");
		}
		else if (p < e)
		{
			printf("player lose\n");
		}
		else
		{
			printf("player win\n");
		}
		printf("again?\n1 - Yes\n2 = No\n");
		scanf_s("%d", &p);

		if (p == 2)
		{
			IsGameOver = 1;
		}
	}

}