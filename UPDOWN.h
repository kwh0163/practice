#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void UPDOWN()
{
	//UP - DOWN ����
	//1. ��ǻ�Ͱ� ������ ���ڸ� �̽��ϴ�.
	//2. �츮�� scanf_s()�Լ��� ����ؼ� ���� �Է��մϴ�.
	//3. �״��� ��ǻ�Ͱ� ���� ������ ���ڿ� �츮�� �Է��� ���ڰ� �´��� Ȯ���ϴ� �����Դϴ�.
	//������ "��ǻ�Ϳ��� �¸��Ͽ����ϴ�."
	//Ʋ���� HP�� 1�� ����

	//rand() : 0 ~ 32767 ������ ������ ����
	//��ǻ�ʹ� �Ϻ��� ������ ���� �� �����ϴ�.
	//�ð��� �����ͼ� 1970�� 1�� 1�� �������� �ð��� �����ͼ� ������ �����մϴ�.
	srand(time(NULL));  //�ð� ��������
	int random = rand() % 100 + 1;    //���� ����
	int p = 0;		//�÷��̾�� �Է¹��� ����
	int PlayerWin = 0;	//�÷��̾ ������ ���߾����� ����
	int HP = 10;	//player HP
	char P;
	while (!PlayerWin)
	{
		if (HP == 0)
		{
			printf("��ǻ�Ϳ��� ���̽��ϴ�.\n�ٽ� �Ͻðڽ��ϱ�?\nY/N\n");
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
				printf("�ٽ� �Է����ּ���.\n");
			}
		}
		printf("100������ ������ �Է����ּ���.\n");
		scanf_s("%d", &p);

		if (p == random)
		{
			printf("�����Դϴ�. %d�� ���� ���߼̽��ϴ�.\n", 11 - HP);
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