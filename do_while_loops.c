/*
Do-while loops
Author: Mulila James Mutiso
Date:08-03-2025
*/
#include <stdio.h>

int main(){
 int i=1; //start
 
 do{
    printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
        i++; //step
    
    
    
    }while(i<=100); //stop
    return 0;
}