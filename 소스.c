#include<stdio.h>

//열거형이란
/*
//반드시 하나의 값만 가지게 될 변수들의 집합체

//Day라는 열거형 생성
//열거형은 정수값으로 정의할 수 없다.

enum Day
{
	//열거형 초기값을 명시하지 않으면 가장 처음에
	//있는 열거형 멤버 변수는 0이라는 값으로 초기화됩니다.
	Sunday, //<- 가장 먼저 선언한 열거형 변수가 첫 번째 멤버 변수
	Monday = 20, //열거형 값을 변경할 수 있지만, 그 뒤에 있는 열거형 멤벼 변수들의 값도 함께 바뀝니다.
	Tuesday,
	Wednesday
};

enum State
{
	IDLE,
	ATTACK,
	JUMP,
	DEATH
};
*/

int main()
{
	//열거형 변수
	/*
	enum Day day;

	day = Sunday;

	printf("day의 값 : %d\n", day);

	day = Tuesday;

	printf("day의 값 : %d\n", day);

	enum State state;

	//캐릭터 상태를 대기 상태로 처음에 지정합니다.
	state = IDLE;


	switch (state)
	{
	case IDLE: printf("대기 상태\n");
		break;
	case ATTACK: printf("공격 상태\n");
		break;
	case JUMP: printf("점프 상태\n");
		break;
	case DEATH: printf("죽음 상태\n");
		break;
	}
	*/





	return 0;
}