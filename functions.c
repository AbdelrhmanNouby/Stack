/*************************************
 * Task	  : stack_implementition 
 * Created: 12/27/2021 6:47:12 PM
 * Author : Abdelrhman Elsawy
 *************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "functions.h"

stack_arr100 stack ; 

void push ( uint8_t u8_data )
{
	if ( stack.top == 99 )
		printf("\nstack overflow");
	else
	{
		stack.top++ ;
		stack.string[stack.top] = u8_data ;	
	}
}
uint8_t pop ()
{
	uint8_t u8_data ;
	if ( stack.top == -1 )
		printf("\nstack is empty");
	else
	{
		u8_data = stack.string[stack.top] ;	
		stack.top-- ;
	}
	return u8_data ;
}
void printStack ()
{
	uint8_t u8_index ;
	printf("\n");
	for(u8_index = 0 ; u8_index <= stack.top ; u8_index++)
		printf("%c",stack.string[u8_index]);
}

uint8_t matchingPair ( uint8_t u8_fbracket , uint8_t u8_lbracket )
{
    if ( u8_fbracket == '(' && u8_lbracket == ')')
        return 1;
    else if ( u8_fbracket == '{' && u8_lbracket == '}')
        return 1;
    else if ( u8_fbracket == '[' && u8_lbracket == ']')
        return 1;
    else
        return 0;
}

uint8_t * balancedParentheses ( uint8_t * exprission )
{
	uint8_t u8_index = 0 ;
	while( exprission[u8_index] != 0 )
	{

        if ( exprission[u8_index] == '{' || exprission[u8_index] == '(' || exprission[u8_index] == '[')
            push(exprission[u8_index]);
 
        if (exprission[u8_index] == '}' || exprission[u8_index] == ')'|| exprission[u8_index] == ']') 
		{
            if (stack.top == -1 )
 				return "unbalanced" ;
 
            else if (!matchingPair( pop(), exprission[u8_index]))
 				return "unbalanced" ;
		}
		u8_index++ ;
 	}
 	if (stack.top == -1 )
 		return "balanced" ;
	 else
		 return "unbalanced";
}
