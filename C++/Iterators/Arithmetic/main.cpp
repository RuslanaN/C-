#include <iostream>
#include "ArithmeticIterator.h"

using namespace std;

int main() {
    ArithmeticIterator seq(0,3,15);

    for ( ; !seq.over(); seq.next() ) {
        cout << seq.value() << endl;
    }
    
    return 0;
}
