//check charater is digit or not
#include<stdio.h>
int main(){
    char ch;
    printf("enter your charachter");
    scanf("%c\n", &ch);
   if (ch>='0' && ch<='9')
   { printf("number is digit");
   }
    else{
        printf("number is not digit");
    }
     return 0;
}