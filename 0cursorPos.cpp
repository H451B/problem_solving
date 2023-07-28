#include<bits/stdc++.h>
#include <windows.h>

using namespace std;

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

int wherex()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  cout<<csbi.dwCursorPosition.X<<" ";
  return csbi.dwCursorPosition.X;

  }

int wherey()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
//   cout<<csbi.dwCursorPosition.Y;
  printf("%hd",csbi.dwCursorPosition.Y);
  return csbi.dwCursorPosition.Y;
  }

  int main(int argc, const char** argv) {
    //   wherex();
    //   wherey();
    //   gotoxy(10,10);
    //   wherex();
      printf("Hi\n");
      wherey();


      
      return 0;
  }