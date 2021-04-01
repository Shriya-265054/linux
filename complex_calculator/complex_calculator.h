#ifndef __COMPLEX_CALCULATOR__
#define __COMPLEX_CALCULATOR__
typedef enum error_t
{
    ERROR_DIV_BY_ZERO = -2,
    ERROR_NULL_PTR = -1,
    SUCCESS = 0
}error_t;
/**
 * @brief 
 * 
 */
typedef struct complex_t
{
    float real;
    float imaginary;
}complex_t;

error_t complex_sum(complex_t* cnum1,complex_t* cnum2, complex_t* csum);

#endif