#include<stdio.h>

int main()
{//
  int i=0; int num=0; int count; int Sum=0; //initilize variables
  float average;
  printf(" Please enter your value of your first numner :\n");//prompt for user input
  scanf("%d", &num);//collect and store user input in "sum"
  printf(" The value of your first number is : %d \n", num);//present user info provided

  for(i=1; i<=num; i++)//begin for loop to add all numbers
    {
      Sum +=i;//function to add each loop
      count=i;
    }
  printf(" The sum of the numbers from 1 to %d is:  %d \n", num, Sum);//print statement of the sum that was produced by the function
  printf(" The average of the numbers from 1 to %f is: %f \n",num, count); 
  return 0;
}//end main
