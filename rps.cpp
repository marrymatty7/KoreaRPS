#include  <iostream>
#include <time.h>
#include <string.h>
#include <windows.h>

#define 가위 1
#define 바위 2
#define 보 3

using namespace std;

int random(int n)
{
	srand(time(NULL));
	return rand() % n + 1;
}

int main()
{
   	  const char* version = "1.0.0";
	  SetConsoleTitle("가위바위보 게임");

	  cout << "가위바위보 게임 시작" << version << "\n\n";

	  while(TRUE)
	  {
		  cout << "가위/바위/보/종료 : ";

		  char user[16];
		  cin >> user;

		  int computer = random(3);

		  if (!strcmp(user, "가위"))
		  {
			  switch (computer)
			  {
			  case 가위:
				  cout << "컴퓨터 : 가위\n" << "비겼습니다!" << endl;  break;
			  case 바위:
				  cout << "컴퓨터 : 바위\n" << "컴퓨터가 이겼습니다!" << endl;  break;
			  case 보:
				  cout << "컴퓨터 : 보\n" << "사용자가 이겼습니다!" << endl;
			  }
		  }
		  else if (!strcmp(user, "바위"))
		  {
			  switch (computer)
			  {
			  case 가위:
				  cout << "컴퓨터 : 가위\n" << "사용자가 이겼습니다!" << endl;  break;
			  case 바위:
				  cout << "컴퓨터 : 바위\n" << "비겼습니다!" << endl;  break;
			  case 보:
				  cout << "컴퓨터 : 보\n" << "컴퓨터가 이겼습니다!" << endl;
			  }
		  }
		  else if (!strcmp(user, "보"))
		  {
			  switch (computer)
			  {
			  case 가위:
				  cout << "컴퓨터 : 가위\n" << "컴퓨터가 이겼습니다!" << endl;  break;
			  case 바위:
				  cout << "컴퓨터 : 바위\n" << "사용자가 이겼습니다!" << endl;  break;
			  case 보:
				  cout << "컴퓨터 : 보\n" << "비겼습니다!" << endl;
			  }
		  }
		  else if (!strcmp(user, "종료"))
		  {
			  return 0;
		  }
		  else
		  {
			  cout << "가위/바위/보/종료 중에 하나를 입력해주세요!" << endl;
		  }
		  cout << endl;
      }
}
