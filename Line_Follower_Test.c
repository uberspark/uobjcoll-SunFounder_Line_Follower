/* C module with equivalen functionality like the original Line_Follwer.py */

#include <stdio.h>
#include "Line_Follower.h" 

int main(){
   printf("Line Follower C Test Application Running\n");
   int *dig_list; 
   int i;
   int cnt = 0;
   lib_init();
   for(cnt=0;cnt<20;cnt++){
      dig_list = read_digital();
      printf("i2c buffer address %p \n",dig_list);
      for(i=0;i<NUM_REF;i++){
         printf("%d ",dig_list[i]);
      } 
      printf("\n");
      sleep(1);
      for(i=0;i<NUM_REF;i++){
         printf("%d ",dig_list[i]);
      } 
   }
   lib_exit();
   return 0;
}
