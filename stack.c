/*************************************
 * Task	  : stack_implementition 
 * Created: 12/27/2021 6:47:12 PM
 * Author : Abdelrhman Elsawy
 *************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "functions.h"

extern stack_arr100 stack ;  // use stack here 

main()
{
	while(1)
	{
		stack.top = -1 ;  // make sure stack is empty  
		uint8_t u8_exp[100];   // array to hold the input exprission 
		printf("\nEnter your exprission : ");			// take string from user 
		scanf("%s",&u8_exp);
		printf("%s\n",balancedParentheses(u8_exp));	    // print exprission status 	
	}
}
