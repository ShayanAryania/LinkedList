//  List.h
//
//  Created by Shayan Aryania

#pragma once


template <typename T> // Because we want to store any type of data (int, string, ..)

class List {
    public :
    const T & operator[](unsigned index);
    void InsertAtFront(const T & data);
    
    private :
    class ListNode {
        public :
        const T & data; //data piece
        ListNode *next; // pointer to next
        ListNode(const T & data) : data(data), next(nullptr) {}
    };
    
    ListNode *head_; //Head pointer for our list
};

#include "list.hpp"
