  #include <stdio.h>
  typedef struct {
    int inval1;
    int inval2;
    int outval;
} MY_DATA;
  void add (MY_DATA *d)  // Param is the pointer to the structure
  {
    d->outval = d->inval1 + d->inval2; // -> the parts of the structure
  }
  void main (void)
  {
    MY_DATA data;
    data.inval1 = 5;
    data.inval2 = 7;
    add (&data);
    printf ("The sum of %d and %d is %d\n", data.inval1,
        data.inval2, data.outval);
}

/*
In the main function, we declare an instance of the structure as a variable called data of type MY_DATA. 
We then access the individual elements of the structure by giving the name of the structure variable (data), 
a full stop (.), and the name of the specific element. So the line data.inval1 = 5 sets the value of the element 
inval1 of data to 5, and so on.
The function add takes a pointer to a MY_DATA structure as its only argument; as ever, a function cannot change the 
values of its arguments, but can change values pointed to by its arguments, so we pass a pointer rather than the 
structure itself.
To access the elements of a structure from a pointer to it, we replace the full stop with an arrow made up of a 
minus sign and a greater than sign (->). So the add function reads the values of inval1 and inval2 in the structure 
pointed to by d, and then writes the result back to outval in the same structure; the main function then prints the 
result from the structure.
Structures are very useful if you need to pass a lot of data around between functions; they can be a lot more 
memory-efficient than having large numbers of global variables, as you only need to create the structure as and 
when you need it, rather than taking up memory all the time.

*/