/*
PRN - 22070123092
POINTERS IN FUNCTION
*/
#include<iostream>
using namespace std;

void increment(int* a)
{
    ++(*a);
}

int main()
{
    int a = 2;
    increment(&a);
    cout << a << endl;
    return 0;
}

/*
Output:-
3
*/
