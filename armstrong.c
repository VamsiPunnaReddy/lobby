// Armstrong program
#include<stdio.h>
void main()
{
  int num,rem,result=0,temp;
  scanf("%d",&num);
  temp=num;
  while(num>0)
       {
        rem = num%10;
        result = rem*rem*rem+result;
        num = num/10;
       }
  if(result==temp)
    printf("Given number is a Armstrong number");
  else
    printf("Given number is not a Armstrong number");
}
