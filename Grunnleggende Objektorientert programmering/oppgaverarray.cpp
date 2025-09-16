#include <iostream>
using namespace std;

int main(){
    //Oppgave 1
    cout << "Oppgave 1" << endl << endl;
    int arr[5] = {10, 20, 30, 40, 50};

    int* p_arr = arr;

    for (size_t i = 0; i < size(arr); i++){
        cout << p_arr[i] << endl;
    } 

    //Oppgave 2
    cout << endl << "Oppgave 2" << endl << endl;
    int *p_left = nullptr;
    int *p_right = nullptr;
    int temp;

    p_left = arr;
    temp = *p_left;
    p_right = &arr[size(arr) - 1];

    while(p_left < p_right){
        p_left = arr;
        temp = *p_left;
        p_right = &arr[size(arr) - 1];
        
        cout << *p_left << "  " << *p_right << endl;

        *p_left = *p_right;
        *p_right = temp;

        cout << *p_left << "  " << *p_right;

        ++p_left;
        --p_right;
    }
}