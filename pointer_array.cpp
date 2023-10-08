/*
PRN - 22070123092
Array Using Pointers
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    int count = size(arr);
    for (int i = 0; i < count; i++)
    {
        cout <<"value: " << *ptr << endl;
        cout << "address: " << ptr << endl;
        ++ptr;
    }
    
    // cout << *ptr << endl;
    return 0;
}
/*
OUTPUT:-
value: 10
address: 0x7ffd9623fb60
value: 20
address: 0x7ffd9623fb64
value: 30
address: 0x7ffd9623fb68
value: 40
address: 0x7ffd9623fb6c

*/
