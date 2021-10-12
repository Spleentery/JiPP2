#include <iostream>
using namespace std;
int main() {

   cout << "two dimension array\n";
   int array[2][2];
   array[0][0] = 1;
   array[0][1] = 2;
   array[1][0] = 3;
   array[1][1] = 4;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << array[i][j] << endl;
        }
    }

    cout << "tablica trojwymiarowa\n";
    srand(time(0));
    int ARRAY[2][2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                 ARRAY[i][j][k] = 1 + rand() % 100;
                 cout << ARRAY[i][j][k] << endl;
            }

        }

    }
    return 0;
}
