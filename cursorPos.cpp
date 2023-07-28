#include<bits/stdc++.h>
#include "Windows.h"
using namespace std;

COORD GetConsoleCursorPosition(HANDLE hConsoleOutput)
{
    CONSOLE_SCREEN_BUFFER_INFO cbsi;
    if (GetConsoleScreenBufferInfo(hConsoleOutput, &cbsi))
    {
        return cbsi.dwCursorPosition;
    }
    else
    {
        // The function failed. Call GetLastError() for details.
        COORD invalid = { 0, 0 };
        return invalid;
    }
}


int main(){
    cout<<GetConsoleCursorPosition<<endl;
    cout<<"Hello\n";
    cout<<GetConsoleCursorPosition<<endl;
    cout<<"world";
    cout<<GetConsoleCursorPosition<<endl;

    POINT p;
    if (GetCursorPos(&p)){
        cout<<p.x<<" "<<p.y<<endl;
        //cursor position now in p.x and p.y
    }
    return 0;
}