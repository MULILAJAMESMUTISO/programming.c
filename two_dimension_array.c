/*
Author:MULILA JAMES MUTISO
ADM: D33-2422-2023 
DATE:24-03-2025
*/
//2D array 
#include<stdio.h>

int main()
{
int i,j;
 //declaration and initialization 
 int marks[3][2]={
  {1,2},
  {3,4},
  {5,6}
 };
 for(i=0;i<3;i++){
 for(j=0;j<2;j++){
 printf("%d\t",marks[i][j]);
 }
 printf("\n");
 }
 return 0;
 }
  
