
#include <stdio.h>
#include<math.h>

int prime(){
    int x;
    scanf("%d",&x);
     if((x%2==0)&&(x%3==0))
         printf("%d not a prime",x);
         else
             printf("%d  is prime",x);
}   
int main(){
    int x=prime();
    printf("%d",x);
    return 0; 
}
    

