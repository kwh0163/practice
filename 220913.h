#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// ���� �μ���?
/*
// �μ��� ������ Ÿ���� �̸� ������ ���� ���� �μ��Դϴ�.
// ���� �μ��� ����� ���ؼ� �ڷ����� �������־�� �մϴ�.
void Function(int x, ...)
{
	va_list pointer; // ���� �μ��� ��� ������
	__crt_va_start(pointer, x); // ���� �μ� ��� ������ ����
	// ���� �μ�(x)�� ������ŭ �ݺ��ϵ��� �����մϴ�.
	for (int i = 0; i < x; i++)
	{
		int value = __crt_va_arg(pointer, int); // int ũ�⸸ŭ ���� �μ� ��� �����Ϳ��� ���� �����ɴϴ�.

		// pointer�� int ũ�⸸ŭ ���������� �̵��մϴ�.
		printf("%d\n", value);
	}
	__crt_va_end(pointer); // ���� �μ� ��� �����͸� NULL �ʱ�ȭ�մϴ�.
}
*/

// ��ǥ ���� X�� Y���� �޴� �Լ��Դϴ�.
void gotoXY(int x, int y)
{
	// x�� y ��ǩ���� �����մϴ�.
	COORD position = { 2 * x , y };

	// ��ǥ ��ġ�� �̵������ִ� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


int main()
{
	// ���� �μ�
	/*
	// Function �̶�� �Լ��� �ϳ��� �Ű� ������ ������ �ֱ� ������ �ϳ��� �μ��� ������ �� �ֽ��ϴ�.
	// Function(3, 20, 30, 40);
	// x �Ű� ������ ���� �ּҰ� ����˴ϴ�.
	// ���� �μ��� �������� �޸� ������ �����ϴ�.
	// x + 1 (20)�� �ּҰ� �˴ϴ�.
	// x + 2 (30)�� �ּҰ� �˴ϴ�.
	// x + 3 (40)�� �ּҰ� �˴ϴ�.
	// printf()�Լ��� �μ��� ��� ���������� ���� �� �ֽ��ϴ�.
	// printf("%d,%d,%d,%d", 20, 30, 40, 50);
	*/

	// ��ǥ ������ �����մϴ�.
	int x = 5, y = 5;

	int key = 0;

	// Ű �Է��� �� �����Ӹ��� �Է��� �Ǿ�� �մϴ�.
	while (1)
	{
		// Ű �Է�
		// ����ŷ 
		/*
		// Ű �Է��� ���� �ʾƵ� �ٸ� �۾��� ����� �� �ֽ��ϴ�.

		// (VK_DOWN) : Ű���� �� Ű�� ������ �� ����Ǵ� �Լ�
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
		// ��ǥ(5, 5)�� �����մϴ�.
		gotoXY(x, y);

		// ��ǥ ������ �޾Ƽ� ����� �ؽ�Ʈ�� ��Ÿ���ϴ�.
		printf("��");
		// system(cls) : ȭ�� ��ü�� ����� �Լ��Դϴ�.
		system("cls");
		*/

		// ���� vs �񵿱�

		// ���ŷ 
		/*
		// Ű �Է��� ���� ������ ��� ����ϰ� �ٸ� �۾��� ������� �ʽ��ϴ�.

		//kbhit : Ű����
		//��ĵ �ڵ��?
		//��� Ű�� ���������� �����ϱ� ����
		//��κ��� ��ǻ�� Ű���尡 ��ǻ�ͷ� ������ ������

		gotoXY(x, y);
		printf("��");

		//_getch() �Լ��� Ű �Է��� ���� �� ���� ���

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