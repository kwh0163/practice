#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

void RSP()
{

	int IsGameOver = 0;
	srand((unsigned int)time(NULL));
	int p;
	int e;
	while (!IsGameOver)
	{
		printf("1 - 가위\n2 - 바위\n3 - 보\n");
		scanf_s("%d", &p);
		e = rand();
		e = (int)e % 3;
		system("cls");
		switch (p)
		{
		case 1:
			printf("플레이어 : 가위\n");
			break;
		case 2:
			printf("플레이어 : 바위\n");
			break;
		case 3:
			printf("플레이어 : 보\n");
			break;
		}
		switch (e)
		{
		case 1:
			printf("적 : 가위\n");
			break;
		case 2:
			printf("적 : 바위\n");
			break;
		case 3:
			printf("적 : 보\n");
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
		system("cls");
		if (p == 2)
		{
			IsGameOver = 1;
		}

	}

}