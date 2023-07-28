
#include<stdio.h>
#include<conio.h>
#include<Windows.h>

// void hit(){
//    if (kbhit()) {
//         char key = getch();
//         if(key=='T' || key=='t'){
//             break;
//         }
//     }

// }

int main(){
    int i;
    for(i=0; i<10; i++)
    {
      printf(".....WEL COME.....");
      Sleep(500);
      if (kbhit()) {
        char key = getch();
        if(key=='T' || key=='t'){
            break;
        }
      }
      system("cls");
      Sleep(500);
    }
    getch();
    return 0;
}