#pragma once
#include<stdio.h>
#include<stdlib.h>

//매개 변수는 함수 내부에서만 사용가능한 변수
//매개 변수가 포인터로 선언되면, 변수의 주소를 전달햐야 합니다.
void Swap(int* x, int* y)
{
	//x만 출력하면 포인터 편수 x만 출력합니다.
	//그래서 *연산자를 사용하여 메모리에 접근하여 값을 출력합니다.
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;

	//x변수가 가리키는 주소와 y 벼수가 가리키는 주소를 출력합니다.
	printf("매개 변수 x의 값 : %d, 매개 변수 y의 값 : %d\n", *x, *y);
} // <- 함수가 종료되는 순간 매개 변수 x와 y값이 사라집니다.

void main()
{
	//참조에 의한 호출
	/*
	//함수 호출 시 전달되는 변수의 주소를 함수의 인수로 전달하는 방법
	int x = 10;
	int y = 20;

	printf("x 변수의 값 : %d, y 변수의 값 : %d\n", x, y);

	Swap(&x, &y);

	printf("x 변수의 값 : %d, y 변수의 값 : %d\n", x, y);

	//참조에 의한 호출은 매개 변수에 변수의 주소를 넘겨준 다음
	//외부에 있는 변수의 주소가 참조되어 외부에 있는 변수에 영향을 끼칠 수 있습니다.

	//값에 의한 호출은 매개 변수에 값만 넘겨주므로 외부에 있는 변수의 값이 변경될 일이 없습니다.
	*/

	//동적 할당이란?
	/*
	//프로그램이 실행 중에 사용자가 필요한 만큼 메모리를 할당하는 작업

	//4byte 메모리
	//포인터 변수 ptr

	//스택                힙
	//ptr ----------->[][][][]
	//4byte 크기의 메모리 공간을 할당합니다.
	//포인터 변수 ptr은 동적으로 할당한 메모리의 시작 주소를 가리킵니다.
	int* ptr = (int *)malloc(sizeof(int));
	//메모리를 동적 할당할 때 주소를 범용 포인터로
	//반환하기 때문에 자료형을 변환한 다음 메모리에 할당해야 합니다.

	*ptr = 10;

	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);

	//동적 할당한 메모리는 free함수를 통해 해제해야 합니다.
	//동적 할당한 메모리는 해제하지 않고 방치하게 되면 메모리 누수가 발생합니다.
	free(ptr);
	*/

	//메모리
	//코드 영역
	//데이터 영역
	//힙 영역 <- 동적 할당
	//스택 영역

}
