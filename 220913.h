#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// 가변 인수란?
/*
// 인수의 개수와 타입이 미리 정해져 있지 않은 인수입니다.
// 가변 인수를 만들기 위해서 자료형을 선언해주어야 합니다.
void Function(int x, ...)
{
	va_list pointer; // 가변 인수의 목록 포인터
	__crt_va_start(pointer, x); // 가변 인수 목록 포인터 설정
	// 가변 인수(x)의 갯수만큼 반복하도록 설정합니다.
	for (int i = 0; i < x; i++)
	{
		int value = __crt_va_arg(pointer, int); // int 크기만큼 가변 인수 목록 포인터에서 값을 가져옵니다.

		// pointer는 int 크기만큼 순방향으로 이동합니다.
		printf("%d\n", value);
	}
	__crt_va_end(pointer); // 가변 인수 목록 포인터를 NULL 초기화합니다.
}
*/

// 좌표 정보 X와 Y값을 받는 함수입니다.
void gotoXY(int x, int y)
{
	// x와 y 좌푯값을 설정합니다.
	COORD position = { 2 * x , y };

	// 좌표 위치를 이동시켜주는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


int main()
{
	// 가변 인수
	/*
	// Function 이라는 함수는 하나의 매개 변수를 가지고 있기 때문에 하나의 인수만 전달할 수 있습니다.
	// Function(3, 20, 30, 40);
	// x 매개 변수의 시작 주소가 저장됩니다.
	// 가변 인수는 연속적인 메모리 공간을 가집니다.
	// x + 1 (20)의 주소가 됩니다.
	// x + 2 (30)의 주소가 됩니다.
	// x + 3 (40)의 주소가 됩니다.
	// printf()함수는 인수를 계속 가변적으로 받을 수 있습니다.
	// printf("%d,%d,%d,%d", 20, 30, 40, 50);
	*/

	// 좌표 정보를 설정합니다.
	int x = 5, y = 5;

	int key = 0;

	// 키 입력은 매 프레임마다 입력이 되어야 합니다.
	while (1)
	{
		// 키 입력
		// 논블로킹 
		/*
		// 키 입력을 하지 않아도 다른 작업이 실행될 수 있습니다.

		// (VK_DOWN) : 키보드 ↓ 키를 눌렀을 때 실행되는 함수
		if (GetAsyncKeyState(VK_DOWN))
		{
			if (y + 1 > 20)
			{
				Sleep(100);
			}
			else
			{
				y++;

				Sleep(100);
			}
		}
		if (GetAsyncKeyState(VK_UP))
		{
			if (y - 1 < 0)
			{
				Sleep(100);
			}
			else
			{
				y--;

				Sleep(100);
			}
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			if (x + 1 > 20)
			{
				Sleep(100);
			}
			else
			{
				x++;

				Sleep(100);
			}
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			if (x - 1 < 0)
			{
				Sleep(100);
			}
			else
			{
				x--;

				Sleep(100);
			}
		}
		// 좌표(5, 5)를 설정합니다.
		gotoXY(x, y);

		// 좌표 정보를 받아서 출력할 텍스트를 나타냅니다.
		printf("★");
		// system(cls) : 화면 전체를 지우는 함수입니다.
		system("cls");
		*/

		// 동기 vs 비동기

		// 블로킹 
		/*
		// 키 입력을 받을 때까지 계속 대기하고 다른 작업이 실행되지 않습니다.

		//kbhit : 키보드
		//스캔 코드란?
		//어느 키가 눌렀는지를 보고하기 위해
		//대부분의 컴퓨터 키보드가 컴퓨터로 보내는 데이터

		gotoXY(x, y);
		printf("★");

		//_getch() 함수는 키 입력을 받을 때 까지 대기

		key = _getch();

		switch (key)
		{
		case 72: y--;
			break;
		case 75: x--;
			break;
		case 77: x++;
			break;
		case 80: y++;
			break;
			}

		system("cls");
		*/


	}

	return 0;
}