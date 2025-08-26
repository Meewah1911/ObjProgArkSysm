#include <iostream>
using namespace std;

double cminput;

int main(){
    cout << "Please write in the value you want to convert: \n>";
    cin >> cminput;
    double cmconv = cminput/2.54;
    cout << cminput << "cm is " << cmconv << " inches. \n";
}
