#include <iostream>
using namespace std;

int a_varaible { 7 };
int b_variable { 11 };

int main(){
    cout << a_varaible << "\n";
    cout << b_variable << endl << endl;

    int* a_pointer {&a_varaible};
    int* b_pointer {&b_variable};

    int temp;
}