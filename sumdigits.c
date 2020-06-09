#include<stdio.h>
int SumOfDigits(int num);
int main()
{
int num, sum;
printf("Enter any number to find sum of digits: ");
scanf("%d", &num);
sum = SumOfDigits(num);
printf("Sum of digits of %d = %d",num,sum);
return 0;
}

int SumOfDigits(int num)
{
if(num == 0)
return 0;
return ((num % 10) + SumOfDigits(num / 10));
}
