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