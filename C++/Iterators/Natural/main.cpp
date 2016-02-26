#include <iostream>
#include "PrimeIterator.h"

using namespace std;

int main() {
    PrimeIterator seq(50);

    for ( ; !seq.over(); seq++ ) {
        cout << *seq << endl;
    }

    return 0;
}
