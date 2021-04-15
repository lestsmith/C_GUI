 #include <stdio.h>
void main (void)
{
 int a;
 int *ptr_to_a; /* * is ‘what is pointed to by‘ */
 ptr_to_a = &a; /*&a means ‘the address in memory of the variable a */
 a = 5;
 printf ("The value of a is %d\n", a);
 *ptr_to_a = 6;
 printf ("The value of a is %d\n", a);
 printf ("The value of ptr_to_a is %d\n", ptr_to_a);
 printf ("It stores the value %d\n", *ptr_to_a);
 printf ("The address of a is %d\n", &a);
}

/*
It’s worth stressing this again: a pointer is not a piece of memory, it’s just an address of
memory. If you want to do anything with a pointer, you need to declare something for it to
point to as well as the pointer itself.
*/