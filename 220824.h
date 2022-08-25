#pragma once
#include<stdio.h>

void main()
{
	//문자열이란
	/*
	//연속적인 메모리 공간에 저장된 문자 변수의 집합

	//char는 1byte이므로 하나의 문자만 저장할 수 있습니다.
	char alphabet = 'A';

	char string[6] = {'A', 'B', 'C', 'D', 'E'};

	string[0] = 'T';

	//문자 배열을 선언할 때 맨 마지막에 NULL만 포함됩니다.
	//문자 배열같은 경우에는 배열의 크기 n + 1로 설정해야 합니다.
	printf("string 배열의 값 : %s\n", string);

	//NULL문자는 문자열의 끝을 알려주는 제어문자
	string[2] = '\0';

	//문자 배열 중간에 NULL문자가 있으면 NULL문자 이전의 문자열까지만 출력됨
	printf("string 배열의 값 : %s\n", string);
	*/

	//문자열 초기화
	/*
	//코드 영역
	//데이터 영역 -> BSS, Read Only Data Segment
	//스택
	//힙

	//"count"

	//4byte 변수의 메모리를 저장할 수 있는 포인터 변수
	//char* ptr
	const char* ptr = "count";

	//포인터가 변수가 어디를 가리키고 있는지 확인하기 위해서 %c로 출력함

	//*ptr을 하는 순간 포인터가 가리키고 있는 위치에 접근해서 값을 출력함
	//"%s" 문자열의 시작주소로 접근해서 값 count를 출력

	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %c\n", ptr[0]);
	printf("ptr이 가리키는 문자열의 값 : %c\n", *ptr);
	printf("ptr이 가리키는 문자열의 값은 : %s\n", ptr);
	*/

	//이중 포인터
	/*
	int value = 100;

	//ptr -> value 시작 주소를 가리킴
	int* ptr = &value;

	//이중 포인터는 ptr이라는 포인터 변수의 주소를 저장합니다.
	//pptr -> ptr의 시작 주소를 가리킴
	int** pptr = &ptr;

	printf("value의 주소 : %p\n", &value);
	printf("ptr이 가리키는 값 : %p\n", ptr);
	printf("ptr의 주소 : %p\n", &ptr);
	printf("pptr이 가리키는 값 : %p\n", pptr);
	printf("ptr 변수가 가리키고 있는 변수의 값 : %d\n", * ptr);
	printf("pptr 변수가 가리키고 있는 변수의 값 : %d\n", ** pptr);
	*/

	//소수 판별하기
	/*
	int count = 0;
	int value;

	scanf_s("%d", &value);

	for (int i = 1; i <= value; i++)
	{
		if (value % i == 0)
		{
			count++;
		}
	}
	if (value <= 0)
	{
		printf("0보다 작거나 같습니다.\n");
	}
	else if (count == 2)
	{
		printf("소수입니다.\n");
	}
	else if (count == 1)
	{
		printf("1입니다.\n");
	}
	else
	{
		printf("소수가 아닙니다.\n");
	}
	*/






}