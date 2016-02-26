#include <iostream>
#include "ArrayIterator.h"

using namespace std;

int main() {
    int array[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    ArrayIterator<int> seq(array, 10);

    for ( ; !seq.over(); seq++ ) {
        cout << *seq << endl;
    }

    return 0;
}
