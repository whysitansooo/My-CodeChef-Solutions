#include <stdio.h>
int main()
{
   int T;
   scanf("%d",&T);
   while(T--){
      int MA;
      int TP;
      int CA;
      scanf("%d %d %d",&MA,&TP,&CA);
      if(CA>=MA && CA<TP){
         printf("YES\n");
      }
      else{
         printf("NO\n");
      }
   }
}
