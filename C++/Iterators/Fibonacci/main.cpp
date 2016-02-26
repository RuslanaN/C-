#include <iostream>
#include "FibonacciIterator.h"

using namespace std;

int main() {
    FibonacciIterator seq(10);

    for ( ; !seq.over(); seq++ ) {
        cout << *seq << endl;
    }

    return 0;
}


