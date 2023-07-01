#include <bits/stdc++.h>

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *prev = NULL, *next = NULL, *curr = head;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = next;
    }
    return prev;
}