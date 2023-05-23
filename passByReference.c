// Pass by reference

// Even though C always uses 'pass by value', it is possible simulate passing by reference by using 
// dereferenced pointers as arguments in the function definition, and passing in the 'address of' 
// operator & on the variables when calling the function. 
// What is passed in is a copy of the pointer, but what it points to is still the same address in 
// memory as the original pointer, so this allows the function to change the value outside the function.
// The arguments passed in and worked with inside the function are dereferenced pointers, which, 
// from the programmer's perspective, is essentially the same thing as working with the values themselves.

// Using the same structure as the swap function above, using pointers, the values outside the function 
// will be swapped:

#include <stdio.h>

void swap(int *pFirstVariable, int *pSecondVariable)
{
  int temp;

// using dereferenced pointers means the function is working with the values at the addresses 
// that are passed in
  temp = *pFirstVariable;
  *pFirstVariable = *pSecondVariable;
  *pSecondVariable = temp;

  return;
}

int main(void)
{
  int a = 100;
  int b = 200;

  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call the function to swap values, using the 'address of' operator to pass in the address of each variable
  swap(&a, &b);

  // check values outside the function after swap function is run
  printf("after swap: value of a: %d \n", a);
  printf("after swap: value of b: %d \n", b);

  return 0;
}

/**
 * les@Les-MBP C_GUI % ./passByReference
 * before swap: value of a: 100 
 * before swap: value of b: 200 
 * after swap: value of a: 200 
 * after swap: value of b: 100 
*/