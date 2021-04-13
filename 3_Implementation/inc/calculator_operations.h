/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CAR_SERVICE_H__
#define __CAR_SERVICE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include <malloc.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
typedef struct profile{
    char id[5];
    char name[300];
    char phone_numb[10];
    char email_id[50];
}profile;


/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
typedef struct service{
    char id[5];
    char car_number[10];
    char car_model[50];
    int regular_service;
    int no_of_extra_service;
}service;



/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);



/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */