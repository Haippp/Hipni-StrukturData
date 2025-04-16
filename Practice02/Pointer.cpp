#include <iostream>
using namespace std;

int main(){
    int *address, value = 22;
    address = &value;

    cout << "1." << &value << endl;
    cout << "2." << value << endl << endl;

    cout << "3." << address << endl;
    cout << "4." << &address << endl;
    cout << "5." << *address << endl;

    return 0;
}