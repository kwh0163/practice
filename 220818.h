#pragma once
#include <stdio.h>

void main()
{
	/*
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	*/

	//while문
	//특정조건을 만족할 때까지 계속하여 주어진 명령문을 실행하는 반복문
	/*
	int memory = 5;

	while (memory > 1)
	{
		memory--;
		printf("조건이 참입니다.\n");
	}
	*/

	//do while문
	//조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문
	/*
	int value = 5;

	do
	{
		printf("조건이 거짓입니다.\n");
	} while (value == 10);
	*/


	//continue문
	//해당 조건문만 실행하지 않고, 반복문을 이어서 실행하는 제어문
	/*
	for (int i = 1; i <=10 ; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		printf("%d ", i);
	}
	*/

	//형 변환
	//서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때 기존에 지정했던 자료형을 다른 자료형으로 변환하는 과정

	//암묵적 형 변환
	//서로 다른 자료형으로 연산이 이루어질 때 지료형의 크기가 큰 자료형으로 변환되는 과정

	char x = 10;
	short y = 20;

	int sum = x + y;

	int z = 500;
	char temp = z;

	printf("temp의 값 : %d\n", temp);

	//명시적 형 변환
	//

	int p0 = 10;
	int p1 = 3;

	float result = (float)p0 / p1;

	printf("result의 값은 : %f\n", result);

	/*
	printf("char의 크기 : %d\n", sizeof(char));
	printf("short의 크기 : %d\n", sizeof(short));
	printf("int의 크기 : %d\n", sizeof(int));
	printf("long의 크기 : %d\n", sizeof(long));
	printf("float의 크기 : %d\n", sizeof(float));
	*/
	//int와 long의 차이
	//int는 32비트 운영체제와 64비트 운영체제에서도 4byte의 크기를 가진다.
	//long은 32비트 운영체제에서는 4byte, 64비트 운영체제에서는 8byte의 크기를 가진다.
	//단, 윈도우즈 64비트 운영체제에서는 4byte다.

}