#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char string[1000];
int count=0;
printf("Enter the string:");
scanf("%s",string);
for(int i=0;i<(strlen(string));i++){
if(isdigit(string[i])){
count++;
}
}
printf("No of Numerical Digits:%d",count);
return 0;
}