#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<mmsystem.h>

#pragma comment(lib,"winmm.lib")

enum textColor
{
	BLACK,
	BLUE,
	GREEN,
	SILVER,
	RED,
	OFTEN,
	YELLOW,
	WHITE,
	GRAY
};

void CursorActive()
{
	CONSOLE_CURSOR_INFO cursor;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);

	//.bVisible = Ŀ�� ���� ���ο� ���� ����
	//0�� �� Ŀ�� ��Ȱ��ȭ
	//1�� �� Ŀ�� Ȱ��ȭ
	cursor.bVisible = 0;

	//SetConsoleCursorInfo = �����Ǿ� �ִ� �ܼ� ��ũ�� ���۾�� ���Ͽ� Ŀ���� ���¸� �����ϴ� �Լ�
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);


}

int main()
{
	CursorActive();

	//���� ����
	/*
	//fopen()
	//ù ��° �Ű����� : �ؽ�Ʈ ������ �̸�
	//�� ��° �Ű����� : �ؽ�Ʈ ������ ����� ��� (read / write)
	FILE* filePointer = fopen("data.txt", "w");

	//fputs : ������ ���ڸ� �ϳ��� ���� �Լ�

	fputs("ü��\n", filePointer);
	fputs("����\n", filePointer);
	fputs("���ݷ�\n", filePointer);

	//fclose : ������� ������ �ݾ��ݴϴ�.
	fclose(filePointer);
	*/

	//���� �б�
	/*
	FILE* readPointer = fopen("Resources/dragon.txt", "r");

	//text ������ ���� �����͸� ���� �� �ִ� ���� ����
	char Buffer[10000] = { 0, };

	//ù ��° �Ű����� : �б� ���� ���� �迭�� �����մϴ�.
	//�� ��° �Ű����� : ũ�⸦ ������ �迭�� ����Ű�� ������
	//�� ��° �Ű����� : �о���� ������ ũ��� ������ ����Ʈ�Դϴ�.
	//�� ��° �Ű����� : �����͸� �Է¹��� ��Ʈ���� FILE��ü�� ����Ű�� ������
	fread(Buffer, 1, 10000, readPointer);

	printf("%s", Buffer);

	fclose(readPointer);
	*/

	//����� �ѱ� ������ ����
	/*
	//����� 1byte�� ǥ���մϴ�.
	//0 ~ 255 (256)������ �����͸� ǥ���� �� �ֽ��ϴ�.
	//����� �ƽ�Ű �ڵ� ü��
	char array[] = "Hello";

	//�ѱ��� 2byte�� �����͸� ǥ���մϴ�.
	//�ʼ� 19��, �߼� 21��, ���� 28�ڷ� �̷������ 11172�ڸ� ǥ���ϰ� �˴ϴ�.
	//�ѱ��� ���� �ڵ� ü��
	char korean[] = "�ȳ��ϼ���";
	*/

	//SetConsoleTextAttribute : �ؽ�Ʈ�� ������ �ٲ��ִ� �Լ�
	/*
	int count = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), count);
			printf("��  ");
			count++;
		}
		printf("\n");
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	*/


	//���� ȣ��
	/*
	//PlaySound�� wav ���ϸ� ��밡��
	PlaySound(TEXT("Resources/Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP);

	int a = 0;

	scanf_s("%d", &a);
	*/

	return 0;
}