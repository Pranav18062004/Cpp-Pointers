/*
PRN - 22070123092

C++ program to use pointers for float values.

*/

#include<iostream>
using namespace std;
int main()
{
    
    float fl_value = 34.56;
    float *fl_ptr;
    fl_ptr = &fl_value;
    cout << "Value of float: " << fl_value << endl;
    cout << "Value of fl_ptr: " << fl_ptr << endl;
    ++fl_ptr;
    cout << "Value of Incremented fl_ptr: " << fl_ptr<< endl;


    return 0;
}

/*
OUTPUT:
Value of float: 34.56
Value of fl_ptr: 0x7fff7e16ade4
Value of Incremented fl_ptr: 0x7fff7e16ade8
*/
