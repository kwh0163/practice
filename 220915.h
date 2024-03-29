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

	//.bVisible = 커서 노출 여부에 대한 변수
	//0일 때 커서 비활성화
	//1일 때 커서 활성화
	cursor.bVisible = 0;

	//SetConsoleCursorInfo = 지정되어 있는 콘솔 스크린 버퍼어ㅔ 대하여 커서의 형태를 설정하는 함수
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);


}

int main()
{
	CursorActive();

	//파일 쓰기
	/*
	//fopen()
	//첫 번째 매개변수 : 텍스트 파일의 이름
	//두 번째 매개변수 : 텍스트 파일의 입출력 모드 (read / write)
	FILE* filePointer = fopen("data.txt", "w");

	//fputs : 파일의 문자를 하나씩 쓰는 함수

	fputs("체력\n", filePointer);
	fputs("마력\n", filePointer);
	fputs("공격력\n", filePointer);

	//fclose : 열어놓은 파일을 닫아줍니다.
	fclose(filePointer);
	*/

	//파일 읽기
	/*
	FILE* readPointer = fopen("Resources/dragon.txt", "r");

	//text 파일의 문자 데이터를 담을 수 있는 버퍼 선언
	char Buffer[10000] = { 0, };

	//첫 번째 매개변수 : 읽기 위한 버퍼 배열을 정의합니다.
	//두 번째 매개변수 : 크기를 가지는 배열을 가리키는 포인터
	//세 번째 매개변수 : 읽어들일 원소의 크기로 단위는 바이트입니다.
	//네 번째 매개변수 : 데이터를 입력받을 스트림의 FILE객체를 가리키는 포인터
	fread(Buffer, 1, 10000, readPointer);

	printf("%s", Buffer);

	fclose(readPointer);
	*/

	//영어와 한글 데이터 차이
	/*
	//영어는 1byte로 표기합니다.
	//0 ~ 255 (256)가지의 데이터를 표현할 수 있습니다.
	//영어는 아스키 코드 체계
	char array[] = "Hello";

	//한글은 2byte로 데이터를 표현합니다.
	//초성 19자, 중성 21자, 종성 28자로 이루어져서 11172자를 표현하게 됩니다.
	//한글은 유니 코드 체계
	char korean[] = "안녕하세요";
	*/

	//SetConsoleTextAttribute : 텍스트의 색상을 바꿔주는 함수
	/*
	int count = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), count);
			printf("■  ");
			count++;
		}
		printf("\n");
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	*/


	//사운드 호출
	/*
	//PlaySound는 wav 파일만 사용가능
	PlaySound(TEXT("Resources/Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP);

	int a = 0;

	scanf_s("%d", &a);
	*/

	return 0;
}