#pragma once
#include<stdio.h>
/*
void main()
{
	//부호가 없는 자료형
	//unsigned 자료형도 언더플로우와 오버플로우가 발생함

	char value = 200; //-128 ~ 127
	unsigned char UnsignedValue = 200; // 0 ~ 255
	short variable = 52000; //-32768 ~ 32676
	unsigned short UnsignedVariable = 52000; // 0 ~ 65535

	printf("char의 값 : %d\nunsigned char의 값 : %d\nshrot의 값 : %d\nunsigned short의 값 : %d\n", value, UnsignedValue, variable, UnsignedVariable);

	//실수를 저장하는 방법
	//float 4byte	32bit (단정도)
	//double 8byte	64bit (배정도)

	//고정 소수점
	//소수점을 사용하여 고정된 자릿수의 소수를 나타내는 방법
	//[1] [15] [16]
	//부호 지수 가수

	//부동 소숫점
	//소수점의 위치를 고정하지 않고 그 위치를 나타내는 수를 따로 적는 것으로 유효숫자를 나타내는 가수와 소수점의 위치를 풀이하는 지수로 나누어 표현하는 방법
	//[1] [8]  [23] <- 4byte (정밀도 소수점 6자릿수)
	//[1] [13] [52] <- 8byte (정밀도 소수점 15자릿수)
	//부호 지수 가수
	float pi = 9.25;
	//9.25 = 1001.01
	//첫 번째로 정규화 (소수점을 왼쪽으로 이동시켜 정수부가 한자릿수가 되도록 옮기는 과정)
	//이동시킨 자릿수(3)만큼 2를 제곱하여 곱해준다
	//1.00101 x 2^3
	//정수를 (float 127) (double 1023)만큼 더함
	//3 + 127 = 130
	//1000 0010
	//0 10000010 10010100000000000000000
	//bias 참고

	double rotation = 1.25;

	printf("float 변수의 값 : %f\n", pi);
	printf("double 변수의 값 : %.15lf\n", rotation);

	//조건문
	//if : 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문

	//관계 연산자
	//2개의 실체 간의 특정한 종류의 관계를 비교하여 원하는 값을 출력하는 연산자
	//컴퓨터에서는 0은 거짓을 의미하고 1은 참을 의미함
	int a = 10 > 5;
	int b = 10 == 10;
	int c = 10 >= 10;

	printf("a의 값 : %d\nb의 값 : %d\nc의 값 : %d\n", a, b, c);

	//if문과 여러 개의 else if문의 조건이 참이라면 가장 위에 있는 조건문만 실행됨
	//if문의 조건의 정수가 0만 아니면 실행됨
	if (1) //if문의 조건이 참이면 if문 안 쪽에 {}부분이 실행됨
	{
		printf("첫번째 조건\n");		//if문의 조건이 거짓이면 실행되지 않음
	}
	//else if 문은 if문의 조건이 거짓이라면 조건을 비교하여 실행하는 조건문
	//else if 문을 사용하기 위해서는 if문을 사용한 다음 사용할 수 있다
	else if (0)
	{
		printf("두번째 조건\n");
	}
	else if (0)
	{
		printf("세번째 조건\n");
	}
	//else : if 문의 조건과 else if문의 조건 모두 거짓이라면 실행되는 조건문
	else
	{
		printf("if문과 else if문의 조건 모두 거짓\n");
	}

	if (1)
	{
		printf("두번째 조건\n");
	}
	else
	{
		printf("if문의 조건이 틀립니다.\n");
	}

	if (1)
	{
		printf("세번째 조건\n");
	}
}
*/