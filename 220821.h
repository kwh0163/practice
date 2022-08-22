#pragma once
#include <stdio.h>

void main()
{
	//scanf 함수
	/*
	int value = 50;

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &value);
		printf("value의 값은 : %d\n", value);
	}
	*/

	//주소 연산자
	//변수의 주소 값을 반환한는 연산자
	/*
	int x = 100;

	//변수의 주소는 프로그램이 실행될 때마다 바뀐다.
	//변수의 주소는 16진수로 표시된다.
	//1 2 3 4 5 6 7 8 9 A(10) B(11) C(12) D(13) E(14) F(15)
	printf("x 변수의 주소는 : %p\n", &x);
	*/

	//포인터
	//변수의 메모리에 주소를 저장하는 변수
	/*
	int a = 20;

	//ptr은 포인터 변수이며, 변수의 주소를 저장할 수 있다.
	int* ptr = &a;

	printf("a의 값 : %d\n", a);
	printf("a의 주소 : %p\n", &a);

	//ptr이 가리키는 주소를 출력할 때에는 &를 사용하지 않아도 됨
	printf("ptr이 가리키는 주소 : %p\n", ptr);

	*ptr = 100;
	printf("a의 값은 : %d\n", *ptr);

	//ptr의 고유주소 출력
	printf("ptr의 고유 주소 : %p\n", &ptr);

	//포인터의 크기
	//32비트 컴파일러에서는 4byte
	//64비트 컴파일러에서는 8byte

	printf("포인터 변수의 크기는 : %d\n", sizeof(ptr));

	*/

	//시프트 연산자
	//비트의 값을 주어진 숫자만큼 부호 방향으로 이동시키는 연산자
	//>> 오른쪽으로 비트를 이동시키는 부호
	//<< 왼쪽으로 비트를 이동시키는 부호
	/*
	char count = 10;

	printf("왼쪽으로 1번 시프트한 결과 : %d\n", count <<= 1);
	printf("count 변수의 값 : %d\n", count);
	printf("오른쪽으로 3번 시피트한 결과 : %d\n", count >>= 3);
	*/

	//별찍기

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}