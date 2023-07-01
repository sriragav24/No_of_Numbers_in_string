#include<stdio.h>                              //The stdio.h header defines three variable types, several macros, and various functions for performing input and output.
#include<ctype.h>                              //The ctype.h header file of the C Standard Library declares several functions that are useful for testing and mapping characters.
#include<string.h>                             //The string.h header defines one variable type, one macro, and various functions for manipulating arrays of characters.
int main(){
char string[1000];                             //declaring string with size 1000
int count=0;                                   //initializing count as integer with value =0
printf("Enter the string:");                   //use printf to get string from user
scanf("%s",string);                            //using scanf store the entered string
for(int i=0;i<(strlen(string));i++){           //use for loop to check any numbers are present
if(isdigit(string[i])){                        //This function checks whether the passed character is decimal digit.
count++;                                       //increment count if any number is present at current iterative level
}
}
printf("No of Numerical Digits:%d",count);    //print the total no of numbers present in the string
return 0;  //follow me in github for more❤️ ✅ 👍.
}
