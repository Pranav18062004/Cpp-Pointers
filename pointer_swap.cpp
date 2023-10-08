/*
PRN - 22070123092
Call By Reference
*/

#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}


int main()
{
    int a = 5, b = 2;
    cout << "Value of a and b before swapping: " << a << " "<<b <<endl;
    swap(&a, &b);
    cout << "Value of a and b after swapping: " << a << " "<<b <<endl;
    return 0;
}

/*
OUTPUT-
Value of a and b before swapping: 5 2
Value of a and b after swapping: 2 5
*/

