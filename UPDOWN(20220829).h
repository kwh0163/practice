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
	int Gameover = 0;	//�÷��̾ ������ ���߾����� ����
	int HP = 10;	//player HP
	int P = 0;
	int count = 1;
	while (!Gameover)
	{
		while (HP == 0)
		{
			P = 0;
			printf("��ǻ�Ϳ��� ���̽��ϴ�.\n�ٽ� �Ͻðڽ��ϱ�?\n1 - Y/2 - N\n");
			scanf_s("%d", &P);
			if (P == 1)
			{
				HP = 10;
			}
			else if (P == 2)
			{
				Gameover = 1;
				break;
			}
			else
			{
				printf("�ٽ� �Է����ּ���.\n");
			}
		}
		while (HP != 0)
		{
			printf("100������ ������ �Է����ּ���.\n");
			scanf_s("%d", &p);

			if (p == random)
			{
				printf("�����Դϴ�. %d�� ���� ���߼̽��ϴ�.\n", count);
				Gameover = 1;
				HP = 0;
			}
			else if (p > random)
			{
				printf("DOWN\n");
				count++;
				HP--;
			}
			else if (p < random)
			{
				printf("UP\n");
				count++;
				HP--;
			}
		}
		
	}


}