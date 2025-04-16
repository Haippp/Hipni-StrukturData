#include <iostream>
using namespace std;

void demo(int *n1,int *n2,int *n3);

int main(){
    int a1 = 0, a2 = 0, a3 = 0;

    cout << a1 << "-" << a2 << "-" << a3 << endl;
    demo(&a1, &a2, &a3);

    cout << a1 << "-" << a2 << "-" << a3 << endl;
}

void demo(int *n1,int *n2,int *n3){
    cout << "Masukkan nilai 1 : ";
    cin >> *n1;

    cout << "Masukkan nilai 2 : ";
    cin >> *n2;
    
    cout << "Masukkan nilai 3 : ";
    cin >> *n3;
}