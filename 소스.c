#include <stdio.h>

void main()
{
	//포인터 연산
	/*
	int array[5] = {10, 15, 20, 25, 30};

	printf("배열의 주소 : %p\n", array);

	//pointer변수는 array의 시작주소를 가리킵니다.
	int* pointer = array;

	printf("포인터 변수의 값 : %p\n", pointer);
	printf("포인터 변수가 가리키는 값 : %d\n", *pointer);

	//pointer변수가 가리키는 자료형의 크기만큼 증가합니다.
	pointer = pointer + 1;
	printf("포인터 변수의 값 : %p\n", pointer);
	printf("포인터 변수가 가리키는 값 : %d\n", *pointer);

	pointer += 2;
	*pointer = 100;
	printf("배열의 4번째 요소 : %d\n", array[3]);
	*/

	//최댓값과 최솟값 구하기
	/*
	//data라는 배열 안에서 최댓값 : 66
	//data라는 배열 안에서 최솟값 : 1

	int max = 0;
	int min = 100001;
	
	int data[5] = { 10,5,66,1,2 };

	for (int i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
		if (data[i] < min)
		{
			min = data[i];
		}
	}

	printf("배열에 있는 원소의 최댓값 : %d\n배열에 있는 원소의 최솟값 : %d\n", max, min);
	*/

	//상수 지시 포인터
	/*
	//상수를 가리키는 포인터이며, 포인터 자체는 상수가 아닙니다.

	int value = 100;
	int x = 300;
	const int* ptr = &value;

	//포인터 변수가 가리키는 값을 변경할 수 없습니다.
	//*ptr = 100;

	//상수 지시 포인터는 가리키는 변수를 상수화하지 않습니다.
	value = 200;

	//포인터 가리키는 값은 출력할 수 있습니다.
	printf("ptr이 가리니는 값 : %d\n", *ptr);

	//상수 지시 포인터의 경우 다른 변수의 주소는 저장할 수 있습니다.
	ptr = &x;

	
	printf("ptr이 가리키는 값 : %d\n", *ptr);
	*/

	//2차원 배열
	//배열의 요소로 또 다른 배열을 가지는 배열

	//앞에 있는 배열이 열의 길이, 뒤에 있는 배열이 행의 길이
	//3열 2행
	int team[3][2] =
	{
		{0, 5},
		{10, 4},
		{9, 1}
	};

	//2중 for문을 이용해서 2차원 배열의 값을 전부 출력
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d번 째 열의 %d 번 째 행의 값 : %d\n",i, j, team[i][j]);
		}
	}

}