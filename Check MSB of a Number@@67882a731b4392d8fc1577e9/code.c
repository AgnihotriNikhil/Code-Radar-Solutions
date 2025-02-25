#include <stdio.h>
int main(){
   unsigned int num;
   scanf("%u",&num);
   unsigned int msb_mask = 1 << 31;
   if(num & msb_mask){
    printf("Set\n");
   return 0;
   }
   else;
   printf("Not Set\n");
   return 0;
}