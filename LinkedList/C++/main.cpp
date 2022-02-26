//  main.cpp
//  Linked_List
//
//  Created by Shayan Aryania
//

#include <iostream>
#include "list.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    List<int> list;
    list.InsertAtFront(3);
    list.InsertAtFront(2);
    list.InsertAtFront(1);
    cout<< " list[0]: " << list[0] <<  endl;
    cout<< " list[1]: " << list[1] <<  endl;
    cout<< " list[2]: " << list[2] <<  endl;
}
