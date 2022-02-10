#include <stdio.h>

int for_func(int i, int end){
   if(i > end){
     return i - 1;
   }
   printf("%d ",i);
   int cont = for_func(++i,end); 
   return cont;
}

int main(int argc, char const *argv[])
{
    printf("%d", for_func(0,10));
    return 0;
}
