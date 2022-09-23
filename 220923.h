#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//Typedef
/*
//이미 사용되는 자료형을 다른 새로운 자료형으로 재정의할 수 있도록 해주는 키워드

typedef int INT32; //int == INT32

//typedef로 구조체를 선언할 때 _(이름)으로 선언하고,
//정의는 (이름)으로 선언한다.
typedef struct _Player
{
	int x;
	int y;
	char name[20];
	const char* shape;
}Player;
*/

//문제이름 : 합
//입력값 n이 주어졌을때, 1부터 n까지의 합을 구하는 프로그램을 작성해주세요
void plus()
{
	int n;
	scanf_s("%d", &n);
	int result = 0;

	for (int i = 1; i <= n; i++)
	{
		result += i;
	}

	printf("1부터 n까지의 합은 : %d\n", result);
}

int main()
{
	//Typedef
	/*
	int a = 10;
	INT32 b = 20;

	printf("a의 값 : %d\n", a);
	printf("b의 값 : %d\n", b);

	Player player;
	strcpy(player.name, "Watson");

	printf("player의 이름 : %s\n", player.name);
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