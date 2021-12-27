/*************************************
 * Task	  : stack_implementition 
 * Created: 12/27/2021 6:47:12 PM
 * Author : Abdelrhman Elsawy
 *************************************/
 
#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__
#include "types.h"

void push ( uint8_t u8_data );
uint8_t pop ();
void printStack ();
uint8_t matchingPair ( uint8_t u8_fbracket , uint8_t u8_lbracket );
uint8_t * balancedParentheses ( uint8_t * exprission );

#endif /*functions.h*/
