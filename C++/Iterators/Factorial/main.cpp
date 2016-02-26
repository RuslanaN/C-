#include <iostream>
#include "FactorialIterator.h"

using namespace std;

int main() {
    FactorialIterator seq(10);

    for ( ; !seq.over(); seq.next() ) {
        cout << seq.value() << endl;
    }

    return 0;
}
