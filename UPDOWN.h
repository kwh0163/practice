#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void UPDOWN()
{
	//UP - DOWN 게임
	//1. 컴퓨터가 랜덤한 숫자를 뽑습니다.
	//2. 우리가 scanf_s()함수를 사용해서 값을 입력합니다.
	//3. 그다음 컴퓨터가 뽑은 랜덤한 숫자와 우리가 입력한 숫자가 맞는지 확인하는 게임입니다.
	//맞으면 "컴퓨터에게 승리하였습니다."
	//틀리면 HP가 1씩 감소

	//rand() : 0 ~ 32767 사이의 난수를 생성
	//컴퓨터는 완벽한 랜덤을 만들 수 없습니다.
	//시간을 가져와서 1970년 1월 1일 기준으로 시간을 가져와서 랜덤을 생성합니다.
	srand(time(NULL));  //시간 가져오기
	int random = rand() % 100 + 1;    //난수 생성
	int p = 0;		//플레이어에게 입력받을 변수
	int PlayerWin = 0;	//플레이어가 난수를 맞추었는지 여부
	int HP = 10;	//player HP
	char P;
	while (!PlayerWin)
	{
		if (HP == 0)
		{
			printf("컴퓨터에게 지셨습니다.\n다시 하시겠습니까?\nY/N\n");
			scanf_s("%c", P);
			if (P == 'Y')
			{
				HP = 10;
			}
			else if (P == 'N')
			{
				PlayerWin = 1;
			}
			else
			{
				printf("다시 입력해주세요.\n");
			}
		}
		printf("100이하의 정수를 입력해주세요.\n");
		scanf_s("%d", &p);

		if (p == random)
		{
			printf("정답입니다. %d번 만에 맞추셨습니다.\n", 11 - HP);
			PlayerWin = 1;
		}
		else if (p > random)
		{
			printf("DOWN\n");
			HP--;
		}
		else if (p < random)
		{
			printf("UP\n");
			HP--;
		}
		
	}


}