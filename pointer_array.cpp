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