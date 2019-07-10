#include "number.h"


int main()
{

     uint32_t number;
     uint32_t retVal;
     uint32_t factorialNumber;
     unsigned long long factorial_number;
     printf("Enter the number of your choice\n");
     scanf("%d",&number);
     factorialNumber = number;

     retVal = GetPalindrome(number);
     if (retVal != 0)
	     printf("The number is palindrome\n");
     else
	     printf("The number is not Palinfrome\n");

     factorial_number = getFactorial(factorialNumber);
     if(factorial_number == 0){
	     printf("Factorial of a number less than 0 is not possible\n");
     }
     else
	     printf("Factorial of the number is %llu\n",factorial_number);







	return 0;

}
