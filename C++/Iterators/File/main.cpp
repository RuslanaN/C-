#include <iostream>
#include "FileIterator.h"

using namespace std;

int main() {
    FileIterator<char> seq("task.in");

    for ( ; !seq.over(); seq++ ) {
        cout << *seq << endl;
    }

    return 0;
}
