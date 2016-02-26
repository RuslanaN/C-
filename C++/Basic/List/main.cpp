#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;

int main() {
    List* list = new List;

    cout << *list << endl;
    cout << "push_back elements: " << endl;

    for ( int i = 0; i < 15; i++ ) {
        list->push_back(15*i);
    }
    cout << *list << endl;

    cout << "erase elements: " << endl;
    list->erase(3);
    cout << *list << endl;

    cout << "insert elements: " << endl;
    list->insert(99, 2);
    cout << *list << endl;

    cout << "sorted elements: " << endl;
    list->sort();
    cout << *list << endl;

    cout << "find element: " << endl;
    list->find(12);

    cout << "pop_back elements: " << endl;
    list->pop_back();
    cout << *list << endl;
    list->pop_back();
    list->pop_back();
    cout << *list << endl;

    delete list;

    return 0;
}
