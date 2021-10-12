#include <iostream>
using namespace std;
int main() {
    int rozmiar;
    cout << "podaj rozmiar tablicy dynamicznej" << endl;
    cin >> rozmiar;
    int * array = new int[rozmiar];
    for (int i = 0; i < rozmiar; ++i) {
        cout << "x" << i << ":";
        cin >> array[i] ;
    }
    cout << "your data in array is:\n";
    for (int i = 0; i < rozmiar; ++i) {
        cout << array[i] << endl;
    }
    delete[] array;
    return 0;
}
