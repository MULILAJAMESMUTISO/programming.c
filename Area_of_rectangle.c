//program to find the area of rectangle 
/*
Author: MULILA JAMES MUTISO 
Adm: D33-2422-2023 
Date:22-02-2025
*/
//the user is prompted to include the length and width of the rectangle 

#include<stdio.h>
int main(){
 int length =20;
 int width =10;
 printf("enter length:\n");
 scanf("%d",& length);//input length 
 printf("enter width:\n");
 scanf("%d",& width);//input width
 int area= length*width;
 printf("area:%d\n",area);//output the area based on the formula A=L*W
 return 0;
 }
 