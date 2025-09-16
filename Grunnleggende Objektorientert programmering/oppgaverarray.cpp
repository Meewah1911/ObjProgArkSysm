#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr)/sizeof(arr[0]);
}