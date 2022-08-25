#include<stdio.h>

//char, int, float

//void는 자료형이 없다.
//함수는 main() 함수에 외부에서 선언이 되어야 합니다.
//함수에 매개변수가 들어가지 않아도 선얼할 수 있습니다.
void Function() // () <- 매개변수가 들어가는 영역
{	// <- Function의 시작점
	printf("안녕하세요?\n");
	printf("안녕하세요?\n");
	printf("안녕하세요?\n");

	for (int i = 0; i < 3; i++)
	{
		printf("안녕하세요?\n");
	}
}	// <- Function의 종료지점

//매개 변수
//함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수
//매개 변수를 선언하기 위해서는 자료형을 정해주어야 합니다.
void Temp(int x)
{
	printf("변수 x의 값 : %d\n", x);
}

//함수의 이름도 중복이 허용되지 않습니다.
//매개변수는 여러 개를 생성해서 사용할 수 있습니다.
void Add(int x, int y)
{
	int result = x + y;
	printf("result의 값은 : %d\n", result);
}

//전역 변수
//함수 외부에서 선언된 변수로, 어디서든 접근 가능하며, 
//프로그램이 종료될 때 메모리에서 사라지는 특징을 가지고 있습니다.

int count = 0;

void Minus()
{
	count++;
	printf("count 변수의 주소 : %p\n", &count);
	printf("count 변수의 값 : %d\n", count);
}

//정적 변수
//지역 변수의 특성을 가지면서, 전역 변수의 특성을 가지고 있는 변수
void Home()
{
	static int variable = 0;
	variable++;
	printf("variable의 값 : %d\n", variable);
} //<- variable(프로그램이 종료될 때까지 메모리에 남아있습니다.)
void Area()
{
	int position = 0;
	position++;
	printf("position의 값은 : %d\n", position);
}

//반환형이란?
//함수의 실행이 끝나고 함수에게 전달하는 결과 값
//void는 자료형이 없으므로 반환형이 필요없다.
//자료형이 있는 함수는 자료형에 알맞는 결과값을 돌려줘야 한다.

int Calculator()
{
	return 10;
}

float Divide(float x, float y)
{
	return x / y;
}

//사용자 정의 함수를 사용하려면 main()함수에서 무조건 호출해야 합니다.
void main()
{
	//함수
	/*
	//하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합

	//호출하는 함수의 이름 정확하게 넣어주어야 합니다.
	Function(); // <- 함수의 호출
	Function();
	*/

	//매개변수를 선언한 함수는 함수를 호출할 때 인수를 넣어주어야 합니다.
	//인수란?
	/*
	//함수가 호출될 때 매개변수에 실제로 전달되는 값
	int value = 100;
	int value1 = 200;
	Temp(value); //value <- 인수
	Temp(value1); //value1 <- 인수

	Add(10, 20);
	*/

	//지역 변수
	/*
	//{}내에서 선언된 변수로 {}내에서만 사용할 수 있으며, {}를 벗어나면 소멸됩니다.
	int x = 10;
	{
		int x = 20;
		printf("중괄호 안에 있는 x의 주소 : %p\n", &x);
	}

	x = 100;
	printf("x의 주소 : %p\n", &x);
	
	count++;
	Minus();

	//정적 변수
	
	Home();
	Home();
	Home();

	Area();
	Area();
	Area();
	*/
	
	printf("함수의 값 : %d\n", Calculator());

	int memory = Calculator();
	printf("memory 변수의 값 : %d\n", memory);

	printf("나누기 함수의 값 : %f\n", Divide(5, 2));

}
