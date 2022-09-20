#include<stdio.h>

struct Object
{
	short size; //2byte
	int height; //4byte
	double position; //8byte

};

struct Monster
{
	int healte; //4byte
	double attack; //8byte
	short defense; //2byte
};

struct Data
{
	int x; //4byte
	int y; //4byte
};

struct Shape
{
	char name[10]; //10byte
	double size; //8byte
};

struct Animal
{
	int leg;
	double size;
};

int main()
{
	
	//바이트 패딩
	/*
	//구조체의 경우 정의해주어야 멤버 변수의 메모리가 생기므로
	//멤버 변수의 데이터를 초기화할 수 있습니다.
	struct Object character = { 10, 100, 3.5f };
	struct Data data = { 10, 10 };

	//구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가
	//다르게 설정될 수 있으며, 구조체 크기를 결정하는 형태는
	//기본 자료형으로만 구성됩니다.
	struct Monster dragon = { 100,30.5f,10 };
	struct Shape circle;

	printf("Object 구조체의 크기 : %d\n", sizeof(character));
	printf("Data 구조체의 크기 : %d\n", sizeof(data));
	printf("Monster 구조체의 크기 : %d\n", sizeof(dragon));
	printf("Shape 구조체의 크기 : %d\n", sizeof(circle));

	//멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록
	//컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩해주는 최적화작업

	//align 규칙
	//CPU가 데이터를 읽을때
	//홀수(X) 3byte, 5byte/ 짝수(O) 2byte 4byte 8byte
	//32bit OS에서는 4byte색 메모리를 읽고, 64bit OS에서는 8byte씩 메모리를 읽습니다.
	//구조체의 크기는 구조체를 구성하는 멤버 중에
	//크기가 가장 큰 자료혀으이 배수가 되도록 정렬합니다.
	*/

	//구조체 포인터
	/*
	//구조체를 가리키는 포인터

	struct Animal* pointer;

	printf("구조체 포인터의 크기 : %d\n", sizeof(pointer));

	struct Animal cat;

	//구조체 주소는 구조체 첫번째 멤버 변수에 있는 시작주소를
	//의미합니다.
	printf("구조체 cat의 주소 : %p\n", &cat);
	printf("구조체 cat의 leg 주소 : %p\n", &cat.leg);
	printf("구조체 cat의 size 주소 : %p\n", &cat.size);

	pointer = &cat;

	//구조체 포인터로 구조체에 있는 메모리에 접근할 때는
	//-> 연산자를 사용해야 합니다.
	pointer->leg = 200;
	pointer->size = 90.3f;

	printf("구조체 포인터로 접근한 leg의 값 : %d\n", pointer->leg);
	printf("구조체 포인터로 접근한 leg의 값 : %.1lf\n", pointer->size);

	//멤버 연산자를 사용하려면 연산자 우선 순위에 맞추어 작성하면 됨
	(*pointer).leg = 400;
	(*pointer).size = 50.6f;

	printf("구조체 포인터로 접근한 leg의 값 : %d\n", pointer->leg);
	printf("구조체 포인터로 접근한 leg의 값 : %.1lf\n", pointer->size);
	*/

	return 0;
}