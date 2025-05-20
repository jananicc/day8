#include<stdio.h>
int main()
{
    int arr1[]={11,2,3,0};
    int arr2[]={4,5,7,1};
    int a1=(sizeof(arr1)/sizeof(arr1[0]));
    int a2=(sizeof(arr2)/sizeof(arr2[0]));
    int x=a1+a2;
    int result[x];
    for(int i=0;i<a1;i++){
        result[i]=arr1[i];
    }
    for(int i=0;i<a2;i++){
        result[a1+i]=arr2[i];
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(result[j]>result[j+1]){
                int t=result[j];
                result[j]=result[j+1];
                result[j+1]=t;
            }
        }
    }
    for(int j=0;j<x;j++){
        printf("%d\n",result[j]);
    }
}