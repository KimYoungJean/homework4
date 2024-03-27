#include<iostream>

using std::cout;
using std::cin;
using std::endl;


/*
과제 3. 일수 출력기

- if문과 switch문 중에 본인이 판단해 효율적인 것을 선택할 것.

- 시작하면 사용자의 입력을 받고 입력한 숫자에 따라 ??일인지 출력하면 된다.

EX) 4를 입력 시 -> 4월은 30일까지 있습니다. -> 다시 커맨드 활성화

- 1월 ~12월까지 확인이 가능해야 하고 이외의 숫자는 예외처리

- 총 5번을 입력하면 프로그램은 종료된다.
*/

void main()
{
	int month;
	for (int i = 1; i <= 5; i++)
	{
	cout << " 궁금하신 월을 입력해주세요:";
	cin >> month;

	
		if (month < 1 || month>12)
		{
		cout << "입력값이 허용된 범위를 벗어납니다.\n\n";
		}
		else if (month == 2)
		{
		cout << "올해 2월은 29일까지 있습니다. 다음 윤년은 4년후 입니다.\n\n";
		}
		else if ((month <= 7 && month % 2 == 1)|| (month >= 8 && month % 2 == 0 ))
		{
		cout << month << "월은 31일까지 있습니다.\n\n";
		}
		else
		{
		cout << month << "월은 30일까지 있습니다.\n\n";
		}
	}
	cout << "사용가능한 검색횟수를 모두 소모하셨습니다"; 
	
}