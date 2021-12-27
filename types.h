/*************************************
 * Task	  : stack_implementition 
 * Created: 12/27/2021 6:47:12 PM
 * Author : Abdelrhman Elsawy
 *************************************/
#ifndef __TYPES_H__
#define __TYPES_H__

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned long int uint32_t;
typedef char sint8_t;
typedef short int sint16_t;
typedef int sint32_t;
typedef float f32_t;
typedef double f64_t;
typedef long double f128_t;
typedef struct Stack {
	sint8_t top ;
	uint8_t string[100];
}stack_arr100; 

#endif /*types.h*/
