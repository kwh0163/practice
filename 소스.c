#include<stdio.h>

void main()
{
	//포인터 배열
	/*
	//배열의 요소로 포인터 변수를 가지는 배열

	int num1 = 10, num2 = 20, num3 = 30;

	int* array[3] = { &num1, &num2, &num3 };

	for (int i = 0; i < 3; i++)
	{
		printf("array 포인터의 값 : %p\n", array[i]);
		printf("array 포인터가 가리키는 값 : %d\n", *array[i]);
	}
	
	const char* data[3] = { "Apple", "Banana", "Melon" };

	data[0] = "Something";

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", data[i]);
	}
	*/

	//ASCII 코드란
	/*
	//미국 표준화 협회가 제정한 정보 교환용 표준 코드로 영문 
	//알파벳을 사용하는 대표적인 문자 인코딩

	if ('A' < 'B')
	{
		for (int i = 0; i < 26; i++)
		{
			char alphabet = 'a' + i;
			char Alphabet = 'A' + i;
			printf("%c %c\n", Alphabet, alphabet);
		}
	}
	*/

	//공약수
	/*
	//두 수의 변수를 입력받습니다.
	//A 변수와 B 변수의 공통된 약수 출력

	int A;
	int	B;

	scanf_s("%d%d", &A, &B);

	for (int i = 1; i <= A && i <= B ; i++)
	{
		if (A % i == 0 && B % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	*/

	//짝수 완전수
	//자기 자신을 제외한 양의 약수를 더했을 때
	//자기 자신이 되는 양의 정수를 말한다.

	int value;
	int sum = 0;

	scanf_s("%d", &value);

	for (int i = 1; i < value; i++)
	{
		if (value % i == 0)
		{
			sum += i;
		}
	}
	if (sum == value)
	{
		printf("완전수 입니다.\n");
	}
	else
	{
		printf("완전수가 아닙니다.\n");
	}





}