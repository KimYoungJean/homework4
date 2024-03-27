#include<iostream>

using std::cout;
using std::endl;


/*
과제 1. 반복문 출력

for / while / do ~ while문 (3가지 조건/반복문 1번씩 사용하기)

- 20에서 1까지 출력

- 1부터 20까지 출력

ㄴ 짝수만
*/

void main()
{
	cout << "과제1. for문을 이용한 반복문 출력\n";
	
	for (int i = 1; i <= 20; i++)
	{
		cout << 21 - i << " ";
	}
	cout << "\n\n";
	cout << "과제1. while문을 이용한 반복문 출력\n";
	int i = 1;
	while (i <= 20)
	{
		cout << 21 - i << " ";
		i++;
	}
	cout << "\n\n";
	cout << "과제1. do~while문을 이용한 반복문 출력\n";
	
	i = 1;
	do 
	{
		cout << 21 - i << " ";
		i++;
	} while (i <= 20);
	cout << "\n\n";
	cout << "과제1. for문을 이용한 반복문 출력\n";
	for (i = 1; i <= 10; i++)
	{
		cout << 2 * i << " ";
	}
	cout << "\n\n";
	cout << "과제1. while문을 이용한 반복문 출력\n";
	i = 1;
	while (i <= 10)
	{
		cout << 2 * i << " ";
		i++;
	}
	cout << "\n\n";
	cout << "과제1. do~while문을 이용한 반복문 출력\n";
	i = 1;
	do 
	{
		cout << 2 * i << " ";
		i++;
	} while (i <= 10);
}