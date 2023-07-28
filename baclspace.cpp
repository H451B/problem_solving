#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h,c);
}
void pas()
{
    char ch, pass[100], orginal[30];
    for(int i=0; i<10; i++)
    {
        gotoxy(10,15);
        printf("enter your password: ");
    }
    int k=0;
    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            pass[k]='\0';
            break;
        }
        else if(ch==8){
            printf("\b");
            pass[k--];}
        else
        {
            pass[k++]=ch;
            printf("*");
        }
    }
    FILE *fp;
    fp=fopen("p.txt","r");
    fgets(orginal,30,fp);
    fclose(fp);
    if(strcmp(orginal,pass)==0)
    {
        system("cls");
        gotoxy(10,15);
        printf("you entered %s",pass);
        printf("\ncorrect");
    }
    else
    {
        system("cls");
        gotoxy(15,15);
        printf("you entered %s\n",pass);
        printf("incorrect");
    }
    getch();
}
int main()
{
    pas();
}