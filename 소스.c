#include<stdio.h>

//��� �Լ�
void Function(int count)
{
	if (count == 1)
	{
		return;
	}
	Function(count - 1);

	printf("count ������ �� : %d\n", count);
}
//���丮��
int Factorial(int num)
{
	if (num == 1)
	{
		return 1;
	}
	int x = Factorial(num - 1) * num;
	return x;
}



void main()
{
	//���� ������
	//3���� �ǿ����ڸ� ������ ���� �������Դϴ�.
	/*
	int x = 10;
	int y = 20;

	//(����) ? (100) : (200)
	int temp = x == y ? 100 : 200;

	printf("temp ������ �� : %d\n", temp);
	*/

	//��� �Լ���?
	/*
	//� �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ�
	Function(3);
	//����Լ��� �Լ��� ��� ȣ���ϱ� ������
	//���� ������ �޸𸮰� ��� ���̰� �ǹǷ�  ���� �����÷ο찡 �Ͼ�� �˴ϴ�.
	
	//��� �Լ��� ����Ϸ��� Ư���� �������� �Լ��� ��ȯ���־�� �մϴ�.
	*/

	//���丮��
	//�Լ��� �����ؼ� �Ű� ������ n���� �־��ݴϴ�.
	//n�� ���� ���� ���丮���� �����ּ���.


	int result = Factorial(3);
	printf("resu��t ������ �� : %d\n", result);





}