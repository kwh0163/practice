#pragma once
#include<stdio.h>

void quadrant(int x, int y)
{
	//��и�
	//�� 1 ��и� (+x, +y)
	//�� 2 ��и� (-x, +y)
	//�� 3 ��и� (-x, -y)
	//�� 4 ��и� (+x, -y)
	//Y ����	  (0, y)
	//X ����	  (x, 0)
	//����		  (0, 0)


	if (x > 0 && y > 0) printf("�� 1 ��и�\n");
	else if (x < 0 && y > 0) printf("�� 2 ��и�\n");
	else if (x < 0 && y < 0) printf("�� 3 ��и�\n");
	else if (x > 0 && y < 0) printf("�� 4 ��и�\n");
	else if (x == 0 && y != 0) printf("X����\n");
	else if (x != 0 && y == 0) printf("Y����\n");
	else printf("����\n");
}