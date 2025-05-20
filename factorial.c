#include<stdio.h>
#include<math.h>
 
 int fact(int n){
     
     int f=1;
     for(int i=n;i>=1;i--){
         f*=i;
        
     }
      return f;
 }
 int main(){
       
         printf("%d",fact(5));
     }
 
 
