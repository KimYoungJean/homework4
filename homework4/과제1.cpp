#include<iostream>

using std::cout;
using std::endl;


/*
���� 1. �ݺ��� ���

for / while / do ~ while�� (3���� ����/�ݺ��� 1���� ����ϱ�)

- 20���� 1���� ���

- 1���� 20���� ���

�� ¦����
*/

void main()
{
	cout << "����1. for���� �̿��� �ݺ��� ���\n";
	
	for (int i = 1; i <= 20; i++)
	{
		cout << 21 - i << " ";
	}
	cout << "\n\n";
	cout << "����1. while���� �̿��� �ݺ��� ���\n";
	int i = 1;
	while (i <= 20)
	{
		cout << 21 - i << " ";
		i++;
	}
	cout << "\n\n";
	cout << "����1. do~while���� �̿��� �ݺ��� ���\n";
	
	i = 1;
	do 
	{
		cout << 21 - i << " ";
		i++;
	} while (i <= 20);
	cout << "\n\n";
	cout << "����1. for���� �̿��� �ݺ��� ���\n";
	for (i = 1; i <= 10; i++)
	{
		cout << 2 * i << " ";
	}
	cout << "\n\n";
	cout << "����1. while���� �̿��� �ݺ��� ���\n";
	i = 1;
	while (i <= 10)
	{
		cout << 2 * i << " ";
		i++;
	}
	cout << "\n\n";
	cout << "����1. do~while���� �̿��� �ݺ��� ���\n";
	i = 1;
	do 
	{
		cout << 2 * i << " ";
		i++;
	} while (i <= 10);
}