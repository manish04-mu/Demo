#include "stack.h"
error_t create_stack(stack_t *stack_ptr, size_t stack_size)
{
    if (NULL == stack_ptr)
        return NULL_PTR;

    stack_ptr->st_arr = malloc(sizeof(user_data_t) * stack_size);

    if (NULL == stack_ptr->st_arr)
        return NULL_PTR;

    return SUCCESS;
}

error_t delete_stack(stack_t *stack_ptr)
{
    free(stack_ptr->st_arr);
    stack_ptr->st_arr = NULL;
    return SUCCESS;
}