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

**Call by Value**

1.Define a function that takes a pointer as a parameter.

2.Inside the function, you can access and modify the data pointed to by ptr. Changes made to *ptr will affect the original data in the calling code.

3.In the main program, declare a variable and initialize it.

**Call by Reference**

1.Define a function that takes a pointer as a parameter.

2.Inside the function, you can access and modify the value at the memory location pointed to by x. Changes made to *x will affect the original variable from the calling code.

3.Call the function from your main program and pass the address (pointer) of the variable you want to modify.

These algorithms demonstrate how to implement call by value and call by reference using pointers in C++. Remember that in the call by value method, a copy of the argument is passed to the function, while in the call by reference method using pointers, the function receives the address of the original variable, allowing it to modify the original variable.

## **OUTPUT**

![exp10](https://github.com/Purvansha022609/Pointer-Operations/assets/139473344/1fc4ef84-14d5-410a-b778-8c36c5f54155)
