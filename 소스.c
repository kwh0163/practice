#include <stdio.h>

void main()
{
	//포인터의 크기
	/*
	double value = 9.36;
	double x = 10.97;

	//포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 자료형과 포인터 변수의 자료형이 일치해야 합니다.
	double* ptr = &value;

	printf("value의 값 : %lf\n", *ptr);
	printf("ptr 포인터 변수의 크기 : %d\n", sizeof(ptr));

	//ptr 변수가 가리키는 주소를 value에서 x라는 변수의 주소로 변경합니다.
	ptr = &x;
	printf("ptr의 값 : %lf\n", *ptr);

	*ptr = 20.52;
	printf("ptr의 값 : %lf\n", *ptr);
	*/

	//배열
	//같은 자료형의 변수들로 이루어진 유한 집합
	/*
	int array[5];

	//배열의 경우 첫 번째 원소는 0부터 시작
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;

	printf("array의 첫 번째 값 : %d\n", array[0]);
	printf("array의 두 번째 값 : %d\n", array[1]);
	printf("array의 세 번째 값 : %d\n", array[2]);
	printf("array의 네 번째 값 : %d\n", array[3]);
	printf("array의 다섯 번째 값 : %d\n", array[4]);

	printf("array의 크기 : %d\n", sizeof(array));
	*/

	//배열의 초기화
	/*
	//0번째 요소(10) 1번째 요소(5) 2번째 요소(0)
	int room[3] = { 10, 5, 0 };

	//배열의 크기를 구하는 방법
	//배열의 크기 / 배열의 자료형
	int size = sizeof(room) / sizeof(int);

	for (int i = 0; i < size; i++)
	{
		printf("room %d번째 요소 : %d\n", i, room[i]);
	}
	*/

	//배열의 크기를 생략할 수 있으며, 초기화 목록에 설정된 수를 컴파일러가 자동으로 계산해줍니다.
	double team[] = {5.1, 6.8, 7.7, 49.63, 11.07};
	printf("team배열의 크기 : %d\n", sizeof(team));

	for (int i = 0; i < sizeof(team) / sizeof(double); i++)
	{
		team[i] = 0;
		printf("%d번째 요소의 값 : %lf\n", i, team[i]);
	}
	//team[0] -> 5.1
	//team[1] -> 6.8
	//team[2] -> 7.7
	//team[3] -> 49.63
	//team[4] -> 11.07


}