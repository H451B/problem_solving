#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int i, x, length;
    scanf("%d",&x);
     for(i=1; i<=x; i++){
       scanf("%s",name);
        // gets(name);
        printf("%s\n",name);
     }
    //   for(i=1; i<x; i++){
    //   length = strlen(name);
    // if(length>10){
    //         printf("%c%d%c",name[0],length-2,name[length-1]);
    //        return 0;
    //     }
    //  else
    //     printf("%s",name);
    //   }
}