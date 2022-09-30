#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x , y  , sizeofint=32 , numofzero ,numofones;
   printf("please Enter number");
   scanf("%d",&x);
 while(x!=0){
    y=x%2;
    if(y==1)
        numofones++;
   x=x/2;
 }
  printf("Total zero bit is %d \n",numofones);
 numofzero=sizeofint-numofones;
 printf("Total zero bit is %d",numofzero);
    return 0;
}

