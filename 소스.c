#include<stdio.h>

void main()
{
	//���ڿ��̶�
	/*
	//�������� �޸� ������ ����� ���� ������ ����

	//char�� 1byte�̹Ƿ� �ϳ��� ���ڸ� ������ �� �ֽ��ϴ�.
	char alphabet = 'A';

	char string[6] = {'A', 'B', 'C', 'D', 'E'};

	string[0] = 'T';

	//���� �迭�� ������ �� �� �������� NULL�� ���Ե˴ϴ�.
	//���� �迭���� ��쿡�� �迭�� ũ�� n + 1�� �����ؾ� �մϴ�.
	printf("string �迭�� �� : %s\n", string);

	//NULL���ڴ� ���ڿ��� ���� �˷��ִ� �����
	string[2] = '\0';
	
	//���� �迭 �߰��� NULL���ڰ� ������ NULL���� ������ ���ڿ������� ��µ�
	printf("string �迭�� �� : %s\n", string);
	*/

	//���ڿ� �ʱ�ȭ
	/*
	//�ڵ� ����
	//������ ���� -> BSS, Read Only Data Segment
	//����
	//��

	//"count"

	//4byte ������ �޸𸮸� ������ �� �ִ� ������ ����
	//char* ptr
	const char* ptr = "count";
	
	//�����Ͱ� ������ ��� ����Ű�� �ִ��� Ȯ���ϱ� ���ؼ� %c�� �����

	//*ptr�� �ϴ� ���� �����Ͱ� ����Ű�� �ִ� ��ġ�� �����ؼ� ���� �����
	//"%s" ���ڿ��� �����ּҷ� �����ؼ� �� count�� ���

	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %c\n", ptr[0]);
	printf("ptr�� ����Ű�� ���ڿ��� �� : %c\n", *ptr);
	printf("ptr�� ����Ű�� ���ڿ��� ���� : %s\n", ptr);
	*/

	//���� ������
	/*
	int value = 100;

	//ptr -> value ���� �ּҸ� ����Ŵ
	int* ptr = &value;

	//���� �����ʹ� ptr�̶�� ������ ������ �ּҸ� �����մϴ�.
	//pptr -> ptr�� ���� �ּҸ� ����Ŵ
	int** pptr = &ptr;

	printf("value�� �ּ� : %p\n", &value);
	printf("ptr�� ����Ű�� �� : %p\n", ptr);
	printf("ptr�� �ּ� : %p\n", &ptr);
	printf("pptr�� ����Ű�� �� : %p\n", pptr);
	printf("ptr ������ ����Ű�� �ִ� ������ �� : %d\n", * ptr);
	printf("pptr ������ ����Ű�� �ִ� ������ �� : %d\n", ** pptr);
	*/

	//�Ҽ� �Ǻ��ϱ�
	/*	
	int count = 0;
	int value;

	scanf_s("%d", &value);

	for (int i = 1; i <= value; i++)
	{
		if (value % i == 0)
		{
			count++;
		}
	}
	if (value <= 0)
	{
		printf("0���� �۰ų� �����ϴ�.\n");
	}
	else if (count == 2)
	{
		printf("�Ҽ��Դϴ�.\n");
	}
	else if (count == 1)
	{
		printf("1�Դϴ�.\n");
	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�.\n");
	}
	*/
	
	

	


}