#include <iostream>
#include "GeometricIterator.h"

using namespace std;

int main() {
    GeometricIterator seq(1,2,5);

    for ( ; !seq.over(); seq.next() ) {
        cout << seq.value() << endl;
    }

    return 0;
}
