#include<stdio.h> 
int main() 
{ 
    char result[50]; 
    float num = 23.34; 
    sprintf(result, "%f", num);//sprintf() function for conversion
    printf("\n The string for the num is %s", result); 
    getchar(); 
} 