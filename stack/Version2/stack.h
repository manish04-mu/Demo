/**
 * @file stack.h
 * @author Bharath.G ()
 * @brief Implementation of Stack Data struture
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __STACK_H_
#define __STACK_H_

#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"
// Update this variable if different data needs to be stored in stack
typedef int user_data_t;

typedef enum error_t{
    SUCCESS,
    NULL_PTR
}error_t;


typedef struct stack_t
{
  user_data_t *st_arr;
  int top;
}stack_t;

/**
 * @brief Create a stack object
 * 
 * @param stack_ptr 
 * @param stack_size 
 * @return error_t 
 */
error_t create_stack(stack_t *stack_ptr, size_t stack_size);

error_t delete_stack(stack_t *stack_ptr);

#endif // __STACK_H_