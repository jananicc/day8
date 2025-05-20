
#include <stdio.h>
#include<math.h>


int factorial(){
    int x;
    int result=1;
   scanf("%d",&x);
    for(int i=x;i>=1;i++){
         result*=i;
        
    } 
}
int main()
{
   int x=factorial();
   printf("%d",x);
  
}