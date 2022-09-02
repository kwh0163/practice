#include<stdio.h> //<>라이브러리 헤더 파일을 가져올 때 사용
#include"Calculator.h" //""사용자 정의 헤더 파일을 가져올 때 사용

//매크로란
/*
//프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정
//매크로는 자료형이 없으므로 메모리 공간이 확보되지 않는다.

#define PI 3.14
//매크로에서는 ;으로 정의할 필요가 없다.

//매크로 함수도 자료형이 없으므로 메모리 공간이 확보되지 않는다.
#define Solution(x, y) x * y // 1 + 1 * 2 + 1

//매크로의 단점
//문제가 생겼을 때 디버깅이 되지 않는다.


#define ANDROID 1
#define IOS 0
*/

//구조체
struct Character
{
	int health;
	const char* name;
	float weight;
	//구조체를 선언하기 전에 구조체는
	//메모리 공간이 생성되지 않으므로,
	//구조체 내부에 있는 데이터를 초기화할 수 없다.
};

void main()
{
	//전처리기
	/*
	//프로그램이 컴파일되기 이전에 프로그램에 대한 사전 처리하는 과정

	int result = Function(10, 20);
	printf("result의 값은 : %d\n", result);

	//매크로 변수는 상수이고, 메모리 공간이 없기 때문에 값을 변경할 수 없다.

	int a = 1;
	int b = 2;

	printf("PI의 값 : %f\n", PI);
	printf("Solution함수의 결과 : %d\n", Solution(10, 20));
	printf("Solution함수의 결과 : %d\n", Solution(a + 1, b + 1));
	*/

	//조건부 컴파일
	/*
	//조건에 따라 코드의 일정 부분을 컴파일할지 안 할지 결정할 수 있다.

#if IOS
	//IOS에 알맞는 키 입력
	printf("안드로이드 기기입니다\n");
#elif ANDROID
	//모바일에 알맞는 키 입력
	printf("두 번째 조건입니다.\n");
#else
	printf("2개의 조건이 다 틀립니다.\n");
#endif
*/

	//구조체란
	/*
	//여러 개의 변수를 하나의 집합으로
	//구조화한 다음 하나의 객체를 생성하는 것

	struct Character player;
	player.health = 100;
	player.name = "wow";
	player.weight = 45.6f;

	printf("player의 체력은 : %d\n", player.health);
	printf("player의 이름은 : %s\n", player.name);
	printf("player의 몸무게는 : %.1f\n", player.weight);

	//구조체에 초기화 리스트를 사용할 때는
	//구조체 위에서 선언된 변수의 순서대로 정의되어야 한다.
	struct Character monster = { 200, "Oni", 86.4f };

	printf("monster의 체력은 : %d\n", monster.health);
	printf("monster의 이름은 : %s\n", monster.name);
	printf("monster의 몸무게는 : %.1f\n", monster.weight);
	*/

	//과잉수
	/*
	//자연수 중에서 자기 자신을 제외한 양의 약수를
	//모두 더했을 때 자기 자신보다 더 커지는 수

	int a;
	int sum = 0;
	scanf_s("%d", &a);

	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			sum += i;
		}
	}
	if (sum > a)
	{
		printf("과잉수 입니다.\n");
	}
	else
	{
		printf("과잉수가 아닙니다.\n");
	}
	*/
}