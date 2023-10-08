# C++ Pointers

This repository contains examples and explanations of pointers in C++. Pointers are variables that store memory addresses, allowing you to work with memory directly. This README provides an overview of how to work with pointers in C++.

## Table of Contents
- [Pointers](#pointers)
  - [Declaration and Initialization](#declaration-and-initialization)
  - [Accessing the Value and Address](#accessing-the-value-and-address)
  - [Pointer Arithmetic](#pointer-arithmetic)
  - [Dynamic Memory Allocation](#dynamic-memory-allocation)
- [Algorithm](#algorithm)
- [Output](#output)

## Pointers

### Declaration and Initialization

In C++, pointers are declared using the asterisk `*` symbol. To declare a pointer to a data type, use the following syntax:

```cpp
dataType *pointerName; // Declaration
```

Example:

```cpp
int *intPtr; // Declares a pointer to an integer
```

Pointers can be initialized with the address of a variable:

```cpp
int number = 42;
int *ptr = &number; // Initializes 'ptr' with the address of 'number'
```

### Accessing the Value and Address

You can access the value pointed to by a pointer using the dereference operator `*`:

```cpp
int value = *ptr; // Accesses the value pointed to by 'ptr'
```

You can also access the memory address stored in a pointer directly:

```cpp
int address = ptr; // Accesses the address stored in 'ptr'
```

### Pointer Arithmetic

Pointers support arithmetic operations that allow you to navigate through memory. For example, you can increment or decrement a pointer:

```cpp
int *nextPtr = ptr + 1; // Points to the next integer in memory
```

### Dynamic Memory Allocation

C++ allows dynamic memory allocation using `new` and deallocation using `delete`:

```cpp
int *dynamicPtr = new int; // Allocates memory for an integer
*dynamicPtr = 100; // Assigns a value to the allocated memory

delete dynamicPtr; // Deallocates the memory
```

## **ALGORITHM**

- **Pointer Array**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a function increment that takes a pointer to an integer as a parameter and increments the value stored at that memory location.

4.Define a function swap that takes two pointers to integers as parameters and swaps the values stored at those memory locations.

5.In the main function:

6.Declare an integer array arr with four elements: 10, 20, 30, and 40.

7.Declare an integer variable i to be used as an index.

8.Declare a pointer to an integer ptr and initialize it with the address of arr[i].

9.Use a for loop to iterate through the elements of arr:

- Print the value pointed to by ptr.
- Print the address of the current element in the array.
- Increment the ptr to point to the next element in the array.
- Declare another integer array arr1 with the same values as arr.

10.Declare an integer variable j to be used as an index.

11.Use a for loop to print the elements of arr1.

12.Declare an integer variable b and set its initial value to 2.

13.Call the increment function, passing the address of b as an argument.

14.Print the updated value of b.

15.Declare two integer variables c and d with initial values 15 and 20, respectively.

16.Print the values of c and d.

17.Call the swap function, passing the addresses of c and d as arguments, which will swap their values.

18.Print the values of c and d again to show the effect of the swap.

19.Declare a character pointer str and initialize it with the address of a string literal "Symbiosis Institute of Technology".

20.Use pointer arithmetic to print the characters at specific positions in the string.

- **Pointer Increament**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Declare an integer variable a and initialize it with the value 10.

4.Declare an integer pointer aptr.

5.Declare a float variable fl_value and initialize it with the value 34.56.

6.Declare a float pointer fl_ptr.

7.Declare a character variable cr_value and initialize it with the character 'a'.

8.Declare a character pointer cr_ptr.

9.Assign the address of a to the aptr pointer.

10.Print the value of a, the address of a, and the value of aptr.

11.Declare a pointer to a pointer to an integer aptr2 and assign it the address of aptr. This creates a double pointer to a.

12.Increment the aptr pointer by 1 (sizeof(int)). This will change its address to the next integer location.

13.Print the value of the incremented aptr and the value of the double pointer aptr2.

14.Assign the address of fl_value to the fl_ptr pointer.

15.Print the value of fl_value, the value of fl_ptr, and the incremented value of fl_ptr. Incrementing fl_ptr will change its address to the next float location.

16.Assign the address of cr_value to the cr_ptr pointer.

17.Print the value of cr_value, the value of cr_ptr, and the incremented value of cr_ptr. Incrementing cr_ptr will change its address to the next character location.

18.Return 0 to end the program.

- **pointer_swap**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a function increment that takes a pointer to an integer int *a as a parameter. This function increments the value stored at the memory location pointed to by a.

4.Define a function swap that takes two pointers to integers int *a and int *b as parameters. This function swaps the values stored at the memory locations pointed to by a and b.

5.In the main function:

6.Declare an integer variable b and set its initial value to 2.

7.Call the increment function, passing the address of b as an argument. This will increment the value of b.

8.Print the updated value of b after the increment.

9.Declare two integer variables, c and d, with initial values 15 and 20, respectively.

10.Print the values of c and d before swapping.

11.Call the swap function, passing the addresses of c and d as arguments. This will swap the values of c and d.

12.Print the values of c and d after swapping to show the effect of the swap.

13.Return 0 to end the program.

- **Demonstrates various operations involving pointers and arrays of different data types (int, float, char)**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a function increment that takes a pointer to an integer int *a as a parameter. This function increments the value stored at the memory location pointed to by a.

4.In the main function:

5.Declare an integer variable a and set its initial value to 10.

6.Declare an integer pointer aptr and assign it the address of a.

7.Print the value of a, the value pointed to by aptr (dereferenced value), and the address of a.

8.Increment the aptr pointer by 1 (sizeof(int)). This will change its address to the next integer location.

9.Print the updated value of aptr.

10.Declare a float variable b and set its initial value to 10.0.

11.Declare a float pointer bptr and assign it the address of b.

12.Print the value of b, the value pointed to by bptr (dereferenced value), and the address of b.

13.Increment the bptr pointer by 1 (sizeof(float)). This will change its address to the next float location.

14.Print the updated value of bptr.

15.Declare a character variable c and set its initial value to 10.

16.Declare a character pointer chptr and assign it the address of c.

17.Print the value of c and the address of chptr (cast to (void*) for printing).

18.Increment the chptr pointer by 1 (sizeof(char)). This will change its address to the next character location.

19.Print the updated address of chptr.

20.Declare a pointer to a pointer to an integer int **aptr2 and assign it the address of aptr. This creates a double pointer to a.

21.Increment the aptr pointer by 1 (sizeof(int)). This will change its address to the next integer location.

22.Print the updated value of aptr and the value in double pointer aptr2.

23.Declare an integer array arr with three elements: 10, 20, and 30.

24.Declare an integer variable i to be used as an index.

25.Declare an integer pointer ptr and initialize it with the address of arr[i].

26.Use a for loop to iterate through the elements of arr:

- Print the value pointed to by ptr.
- Print the address of the current element in the array.
- Increment the ptr to point to the next element.
- Declare another integer array arr1 with four elements: 10, 20, 30, and 40.

27.Declare an integer variable j to be used as an index.

28.Use a for loop to print the elements of arr1.

## **OUTPUT**

1.![exp9_2](https://github.com/Purvansha022609/Pointer-basics/assets/139473344/be0c72e7-a45e-41e1-94f9-5813382467be)

2.![pointer increament exp9](https://github.com/Purvansha022609/Pointer-basics/assets/139473344/6e553d14-cac2-4665-a0ff-0e23d2e68c4a)

3.![exp9_1](https://github.com/Purvansha022609/Pointer-basics/assets/139473344/f575bf1d-0e98-45c6-8374-435446861382)
