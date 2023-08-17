/*
PRN - 22070123092

C++ program to use pointers for integer values.

*/
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *aptr;
    

    aptr = &a;
    cout << "Value of a: " << a << endl;
    cout <<"Location of a: " <<&a << endl;
    cout <<"Value of aptr: " <<aptr << endl;

    int **aptr2 = &aptr;
    ++aptr;
    cout <<"Value of incremented aptr: " << aptr << endl;
    cout << "Value in double pointer aptr2"<<aptr2<< endl;


    return 0;
}
