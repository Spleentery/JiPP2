#include <iostream>
using namespace std;
int main() {
    string J = "JiPP2";
    string *wsk = &J;
    //cout << *wsk << endl;
    //cout << wsk << endl;  // adress of variable J
    //cout << &wsk << endl; // adress of pointer wsk
    //cout << &J << endl;   // adress of variable J
    for (int i = 0; i < 5; ++i) {
        cout << *wsk << endl;
    }
    int table[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; ++i) {
        cout << table[i] << endl;
    }
    int * array = new int[3];
    array[0] = 666;
    array[1] = 999;
    array[2] = 1000;
    array[10] = 1090;
    delete [] array;
    cout << array[10] << endl;
    cout << table << endl; // cout pinter to table
    cout << *table;        // cout table[0]




    return 0;
}
