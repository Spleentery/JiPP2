#include <iostream>
#include "stdlib.h"
using namespace std;

int main(int argc, char *argv[]) {

   int sum = 0;
    for(int i = 0; i < argc ; ++i) {
        cout << "argument[" << i << "] = " << argv[i] <<endl;
        sum += atoi(argv[i]);
    }
    cout << "sum:" << sum << endl;

    return 0;
}
