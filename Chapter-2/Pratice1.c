//priint average of 3 numbers
#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c , average, sum;
    printf("Enter Your Values");
    scanf("%d \n %d\n  %d\n" , &a ,&b,&c);
     sum= a+ b+ c;
     average = sum/3;
     printf("sum of 3 values:%d\n",sum );
     printf("average  of  values: %d\n",average);
     return 0;
}