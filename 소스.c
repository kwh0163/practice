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
	
	//����Ʈ �е�
	/*
	//����ü�� ��� �������־�� ��� ������ �޸𸮰� ����Ƿ�
	//��� ������ �����͸� �ʱ�ȭ�� �� �ֽ��ϴ�.
	struct Object character = { 10, 100, 3.5f };
	struct Data data = { 10, 10 };

	//����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ
	//�ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ� ���´�
	//�⺻ �ڷ������θ� �����˴ϴ�.
	struct Monster dragon = { 100,30.5f,10 };
	struct Shape circle;

	printf("Object ����ü�� ũ�� : %d\n", sizeof(character));
	printf("Data ����ü�� ũ�� : %d\n", sizeof(data));
	printf("Monster ����ü�� ũ�� : %d\n", sizeof(dragon));
	printf("Shape ����ü�� ũ�� : %d\n", sizeof(circle));

	//��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
	//�����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ�۾�

	//align ��Ģ
	//CPU�� �����͸� ������
	//Ȧ��(X) 3byte, 5byte/ ¦��(O) 2byte 4byte 8byte
	//32bit OS������ 4byte�� �޸𸮸� �а�, 64bit OS������ 8byte�� �޸𸮸� �н��ϴ�.
	//����ü�� ũ��� ����ü�� �����ϴ� ��� �߿�
	//ũ�Ⱑ ���� ū �ڷ������� ����� �ǵ��� �����մϴ�.
	*/

	//����ü ������
	/*
	//����ü�� ����Ű�� ������

	struct Animal* pointer;

	printf("����ü �������� ũ�� : %d\n", sizeof(pointer));

	struct Animal cat;

	//����ü �ּҴ� ����ü ù��° ��� ������ �ִ� �����ּҸ�
	//�ǹ��մϴ�.
	printf("����ü cat�� �ּ� : %p\n", &cat);
	printf("����ü cat�� leg �ּ� : %p\n", &cat.leg);
	printf("����ü cat�� size �ּ� : %p\n", &cat.size);

	pointer = &cat;

	//����ü �����ͷ� ����ü�� �ִ� �޸𸮿� ������ ����
	//-> �����ڸ� ����ؾ� �մϴ�.
	pointer->leg = 200;
	pointer->size = 90.3f;

	printf("����ü �����ͷ� ������ leg�� �� : %d\n", pointer->leg);
	printf("����ü �����ͷ� ������ leg�� �� : %.1lf\n", pointer->size);

	//��� �����ڸ� ����Ϸ��� ������ �켱 ������ ���߾� �ۼ��ϸ� ��
	(*pointer).leg = 400;
	(*pointer).size = 50.6f;

	printf("����ü �����ͷ� ������ leg�� �� : %d\n", pointer->leg);
	printf("����ü �����ͷ� ������ leg�� �� : %.1lf\n", pointer->size);
	*/

	return 0;
}