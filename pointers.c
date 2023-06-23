#include <stdio.h>

int main(){

	/**
	 * num is the regular variable
	 * ptr is the pointer to the memory address
	 * *ptr is the dereference value of the address ie the data in the location
	 * &num is the address of the data variable num
	 */

	int num = 8; // Regular variable
	int *ptr = &num; // Dereference operator * , address of operator &
	
	printf("Regular variable contains: %d\n", num);
	printf("Pointer vaiable contains 0x%p\n", ptr);
	printf("Pointer points to value %d\n\n", *ptr); // derefenced the pointer
	
	*ptr = 12; // change the value in the memory address pointed to by ptr

	printf("Regular variable contains: %d\n", num);
	printf("Pointer vaiable contains 0x%p\n", ptr);
	printf("Pointer points to value %d\n\n", *ptr); 
	
	return 0;
}