#include<iostream>

using std::cout;
using std::endl;
using std::cin;

/*
과제2. 반복문 숙달(While문을 사용)
- 정수 하나를 입력 받아 -5씩 반복적으로 연산되는 식을 구현한다.
ㄴ 조건: 입력 받을 값은 -10~+10사이의 숫자여야 하며 , 이외의 값이 들어오면 종료.
ㄴ종료 조건:-15를 넘어가면 탈출
*/

void main()
{
	int num;
	cout << "과제2. 반복문 숙달\n"<<"정수 하나를 입력하시오(-15~15사이의 숫자):\n";
	cin >>  num;

	cout << " 입력값: " << num << endl;
	while ((num < -10) || num > 10)
	{
		cout << "입력값이 허용된 범위를 벗어납니다.";
		break;
	}
	while ((num >= -10) && (num <= 10))
	{
		while (num >= (-10))
		{
			num -= 5;
			cout << num<<" ";
		}
	}
	
}