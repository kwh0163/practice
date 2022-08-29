#pragma once
#include<stdio.h>

//함수의 원형
//호출할 함수를 컴파일러에게 미리 알려주는 과정
//단일 패스 컴파일(O), 멀티 패스 컴파일
void Function(const char* name, void* value);

void Integer(int x)
{
	printf("Integer 함수의 x값 : %d\n", x);
}

void Decimal(float x)
{
	printf("Decimal 함수의 x값 : %f\n", x);
}

void Character(char x)
{
	printf("Character 함수의 x값 : %c\n", x);
}

void Swap(int* x, int* y)
{
	int temp = *y;
	*y = *x;
	*x = temp;
}

void Plus(int x, int y)
{
	printf("%d + %d = %d\n", x, y, x + y);
}

void Minus(int x, int y)
{
	printf("%d - %d = %d\n", x, y, x - y);
}

void Mult(int x, int y)
{
	printf("%d * %d = %d\n", x, y, x * y);
}

void Div(int x, int y)
{
	printf("%d / %d = %f\n", x, y, (float)x / y);
}

void main()
{
	//범용(void) 포인터란?
	/*
	//자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터
	int value = 10;
	void* ptr = &value;

	//범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없다

	*(int *)ptr = 20;
	printf("ptr이 가리키는 값 : %d\n", *(int*)ptr);

	//범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는
	//변수의 자료형으로 형 변환을 해줘야 함

	float decimal = 10.5;
	ptr = &decimal;
	*(float*)ptr = 20.5;
	printf("ptr이 가리키는 값 : %f\n", *(float*)ptr);

	//내가 함수에 입력하는 데이터(변수)가 출력되도록 하고 싶을 때
	//char int float(실수)
	//Integer(50);
	//Character('A');
	//Decimal(10.5);
	int A = 10;
	float B = 99.6;
	char C = 'R';
	Function("int", &A);
	Function("float", &B);
	Function("char", &C);
	*/

	//두 개의 변수의 값 바꾸기
	//하나의 임시 변수를 만들어서 거기에 값을 보관했다가 옮기면 됨
	int A = 10;
	int B = 20;
	printf("변수 A의 값 : %d, 변수 B의 값 : %d\n", A, B);


	Swap(&A, &B);

	printf("변수 A의 값 : %d, 변수 B의 값 : %d\n", A, B);

	//더하기 함수
	Plus(5, 3);

	//빼기 함수
	Minus(7, 6);

	//곱셈 함수
	Mult(4, 8);

	//나눗셈 함수
	Div(8, 2);



}

void Function(const char* name, void* value)
{
	if (name == "int")
	{
		printf("%d\n", *(int*)value);
	}
	else if (name == "float")
	{
		printf("%f\n", *(float*)value);
	}
	else if (name == "char")
	{
		printf("%c\n", *(char*)value);
	}
}
