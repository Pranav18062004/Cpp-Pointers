/*
PRN - 22070123092

C++ program to use pointers for character values.

*/
#include<iostream>
using namespace std;
int main()
{
  
    char cr_value = 'a';
    char *cr_ptr;

    cr_ptr = &cr_value;
    cout << "Value of character: " << cr_value << endl;
    cout << "Value of cr_ptr: " << (void*)cr_ptr << endl;
    ++cr_ptr;
    cout << "Value of Incremented cr_ptr: " << (void*)cr_ptr << endl;


    return 0;
}


/*
OUTPUT:
Value of character: a
Value of cr_ptr: 0x7ffd5093b867
Value of Incremented cr_ptr: 0x7ffd5093b868
*/
