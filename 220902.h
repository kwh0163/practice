#pragma once
#include<stdio.h> //<>���̺귯�� ��� ������ ������ �� ���
#include"Calculator.h" //""����� ���� ��� ������ ������ �� ���

//��ũ�ζ�
/*
//���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� ����
//��ũ�δ� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ �ʴ´�.

#define PI 3.14
//��ũ�ο����� ;���� ������ �ʿ䰡 ����.

//��ũ�� �Լ��� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ �ʴ´�.
#define Solution(x, y) x * y // 1 + 1 * 2 + 1

//��ũ���� ����
//������ ������ �� ������� ���� �ʴ´�.


#define ANDROID 1
#define IOS 0
*/

//����ü
struct Character
{
	int health;
	const char* name;
	float weight;
	//����ü�� �����ϱ� ���� ����ü��
	//�޸� ������ �������� �����Ƿ�,
	//����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� ����.
};

void main()
{
	//��ó����
	/*
	//���α׷��� �����ϵǱ� ������ ���α׷��� ���� ���� ó���ϴ� ����

	int result = Function(10, 20);
	printf("result�� ���� : %d\n", result);

	//��ũ�� ������ ����̰�, �޸� ������ ���� ������ ���� ������ �� ����.

	int a = 1;
	int b = 2;

	printf("PI�� �� : %f\n", PI);
	printf("Solution�Լ��� ��� : %d\n", Solution(10, 20));
	printf("Solution�Լ��� ��� : %d\n", Solution(a + 1, b + 1));
	*/

	//���Ǻ� ������
	/*
	//���ǿ� ���� �ڵ��� ���� �κ��� ���������� �� ���� ������ �� �ִ�.

#if IOS
	//IOS�� �˸´� Ű �Է�
	printf("�ȵ���̵� ����Դϴ�\n");
#elif ANDROID
	//����Ͽ� �˸´� Ű �Է�
	printf("�� ��° �����Դϴ�.\n");
#else
	printf("2���� ������ �� Ʋ���ϴ�.\n");
#endif
*/

//����ü��
/*
//���� ���� ������ �ϳ��� ��������
//����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ��

struct Character player;
player.health = 100;
player.name = "wow";
player.weight = 45.6f;

printf("player�� ü���� : %d\n", player.health);
printf("player�� �̸��� : %s\n", player.name);
printf("player�� �����Դ� : %.1f\n", player.weight);

//����ü�� �ʱ�ȭ ����Ʈ�� ����� ����
//����ü ������ ����� ������ ������� ���ǵǾ�� �Ѵ�.
struct Character monster = { 200, "Oni", 86.4f };

printf("monster�� ü���� : %d\n", monster.health);
printf("monster�� �̸��� : %s\n", monster.name);
printf("monster�� �����Դ� : %.1f\n", monster.weight);
*/

//¦�� ������
/*
//�ڱ� �ڽ��� ������ ���� ����� ������ ��
//�ڱ� �ڽ��� �Ǵ� ���� ������ ���Ѵ�.
=======
	//���׼�
	/*
	//�ڿ��� �߿��� �ڱ� �ڽ��� ������ ���� �����
	//��� ������ �� �ڱ� �ڽź��� �� Ŀ���� ��

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
		printf("���׼� �Դϴ�.\n");
	}
	else
	{
		printf("���׼��� �ƴմϴ�.\n");
	}
	*/

}