#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> //문자열 관련 함수

//자기 참조 구조체
/*
struct Node
{
	int data;
	struct Node* pointer;

};
*/

void Mystrcat(char* str1, const char* str2)
{
	int len = strlen(str1);
	str1 += len;
	for (int i = 0; i <= strlen(str2); i++)
	{
		*(str1 + i) = *(str2 + i);
	}
	str1 -= len;
	printf("%s\n", str1);
}

int main()
{
	//자기 참조 구조체
	/*
	//자신과 동일한 구조체를 가리킬 수 있는 포인터 변수를
	//멤버 변수로 가지는 구조체
	//NULL은 포인터가 아무 위치를 가리키지 않도록 초기화 하는것

	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	struct Node* structPtr = &node1;
	
	printf("첫 번째 구조체 data의 값 : %d\n", structPtr->data);

	structPtr->pointer = &node2;
	printf("두 번째 구조체 data의 값 : %d\n", structPtr->pointer->data);

	structPtr->pointer->pointer = &node3;
	printf("세 번째 구조체 data의 값 : %d\n", structPtr->pointer->pointer->data);
	*/

	//문자열 함수
	
	//strlen - (문자열의 길이를 출력하는 함수)
	/*
	char name[] = { "asdf" };
	printf("name의 값 : %s\n", name);
	printf("name배열의 길이 : %d\n",strlen(name));
	//strlen()함수는 문자열의 길이를 구할 때 
	//NULL문자 이전의 문자의 길이만 계산합니다.
	*/

	//strcpy - (문자열을 복사하는 함수)
	/*
	char A[10] = { "qwer" };
	char B[10] = { "zxvc" };

	//read only 영역에 있는 문자열 리터럴이기 때문에 값을 변경할 수 없다.
	const char* C = "Player";
	const char* D = "Monster";

	int i = 0;
	while (A[i])
	{
		A[i] = B[i];
		i++;
		printf("A의 문자열 : % s\n", A);
	}
	
	strcpy(A, B);
	printf("복사한 A 문자열의 값 : %s", A);
	
	//strcpy()함수의 첫 번째 매개변수는 복사받을 문자열
	//strcpy()함수의 두 번째 매개변수는 복사 할 문자열이다.
	*/

	//strcmp - (문자열을 비교하는 함수)
	/*
	char memory1[] = { "ABCD" }; //266
	char memory2[] = { "ABCT" };
	char memory3[] = { "ABCC" }; //270

	//strcmp는 첫번째 문자열의 크기가 크다면 양수(+1)을 반환합니다.
	//그런데 두번째 문자열의 크기가 크다면 음수(-1)을 반환합니다.
	//만약에 두개 다 문자열의 크기가 같다면 0을 반환합니다.
	printf("두 개의 문자열을 비교한 값 : %d\n", strcmp(memory1, memory2));
	printf("두 개의 문자열을 비교한 값 : %d\n", strcmp(memory1, memory3));

	//strcmp 영어 사전 순서로 우선 순위가 결정됩니다.

	//strncmp : 첫번째 매개변수에 비교할 문자열
	//			두번째 매개변수에 비교할 문자열
	//			세번째 매개변수에 비교할 문자열의 길이

	//ABC == ABC = 0
	printf("두 개의 문자열을 비교한 값 : %d\n",strncmp(memory1, memory2, 3));
	*/

	//strcat - (문자열을 연결하는 함수)
	char name1[11] = { "Kim" };
	char name2[] = { "Woohyup" };

	//strcat같은 경우에는 복사받을 문자열의 크기를 넉넉히 지정해주어야 합니다.
	strcat(name1, name2);
	printf("%s\n", name1);

	char myname1[11] = { "Kim" };
	char myname2[] = { "Woohyup" };

	Mystrcat(myname1, myname2);

	return 0;
}