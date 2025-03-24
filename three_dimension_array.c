/*
//3D array
author:MULILA JAMES MUTISO 
ADM: D33-2422-2023 
DATE:24-03-2025
*/
#include<stdio.h>
int main()
{
int i,j,k;
int marks[2][2][3]={
{
 {1,2,3},
 {4,5,6}
},
{
 {10,20,30},
 {40,50,60}
}
};
 //for(start;stop;step)
 for(i=0;i<2;i++){
 for(j=0;j<2;j++){
 for(k=0;k<3;k++){
 printf("%d\t",marks[i][j][k]);
 }
 printf("\n");
 }
 printf("\n");
 }
 return 0;
 }