//  List.hpp
//
//  Created by Shayan Aryania

template <typename T>

const T & List<T> :: operator[](unsigned index){
    //start a 'thru' pointer to advanced thru the list
    ListNode *thru = head_;
    // loop untill the end of the list
    while (index>0 && thru->next != nullptr) {
        thru = thru->next;
        index--;
    }
    
    return thru->data; //return the data
}

template <typename T>

void List<T> :: InsertAtFront(const T & data) {
    // create a new list node on the heap :
    ListNode *node = new ListNode(data);
    
    //set the new nodes next pointer point the current
    //head of the list:
    node->next = head_;
    
    //set the list's head pointer to the new code:
    head_ = node;
}

