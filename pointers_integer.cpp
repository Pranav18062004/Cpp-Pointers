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
/*
OUTPUT:
Value of a: 10
Location of a: 0x7ffdb7d5a274
Value of aptr: 0x7ffdb7d5a274
Value of incremented aptr: 0x7ffdb7d5a278
Value in double pointer aptr20x7ffdb7d5a268
*/
