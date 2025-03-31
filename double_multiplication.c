/*
//function to multiply 2 numbers
Name:MULILA JAMES MUTISO 
ADM:D33-2422-2023 
DATE:31/03/2025
*/
#include<stdio.h>

int multiplication(int x,int y){
 int ans;
 ans= x*y;
 return ans;
 }
 
 int main(){
 //variable declaration 
  int result,result_1;
  double mult;
  //function calling
  result=multiplication(10,20);
  result_1=multiplication(200,100);
  mult=multiplication(36.3,98.25);
  printf("The ans is %d\n",result);
  printf("The ans is %d\n",result_1);
  printf("multiplication is %lf\n",mult);
  
  return 0;
  }