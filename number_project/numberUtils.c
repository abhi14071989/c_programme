#include "number.h"

/*******************************************************************
 * Function: GetPalindrome
 *         This function gives the reverseNumber by performing
 *         mathematical operation like modulus and division
 *
 * Argument:
 *         uint32_t number;
 *
 * Return:
 *        return the palinfrome number on SUCCESS
 *        return 0,if not a palindrome.
 * ****************************************************************/        

uint32_t GetPalindrome(uint32_t  num)
{
     uint32_t originalNumber,reverseNumber=0,remainder;
	
     //Assigning num to originalNumber
     originalNumber = num;
     
     while(num!=0){
	     remainder = num%10;
	     reverseNumber = (reverseNumber * 10) + remainder;
	     num = num/10;
     }

     if(originalNumber == reverseNumber){
	     return reverseNumber;
     }
     else{
	     return 0;
     }
}

/*******************************************************************
 * Function: getFactorial
 *         This function gives the factorial of the number by performing
 *         mathematical operation multiplication
 *
 * Argument:
 *         uint32_t number;
 *
 * Return:
 *        return the factorial of the  number on SUCCESS
 *        return 0.
 * ****************************************************************/ 
unsigned long long getFactorial(uint32_t num)
{
	uint32_t i;
	unsigned long long factorial;

	if( num < 0){
		printf("factorial is not possible for number %d \n",num);
	}else{
		for(i=0; i <= num;i++){
			factorial = factorial * i;
		}
	}

	return factorial;
}
    
