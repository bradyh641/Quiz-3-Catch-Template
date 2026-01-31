/*
    Interquartile Range

    Given a sorted singly linked list without a tail (e.g, head -> 1 -> 2 -> 3 -> 4), 
    return the interquartile range of the data set using the slow and fast pointer 
    approach OR using a methodology that does not iterate over the linked list 
    twice. You must not iterate over the entire linked list more than once and you 
    cannot use arrays, vectors, lists or an STL implementation of List ADT in this problem.

    Sample Input:
        2 4 4 5 6 7 8
    
    Sample Output:
        3.00 
*/

/*
  I worked with William OFlaherty
*/

#include <iostream>
#include <iomanip>

class Node {
    public:
        int value;
        Node* next = nullptr;
};

Node* insertEnd(Node* head, int key)
{
    Node* temp = new Node();
    temp->value = key;
    if(head == nullptr)
        head = temp;
    else
    {
        Node* curr = head;
        while(curr->next != nullptr)
            curr = curr->next;
        curr->next = temp;
    }
    return head;
}

float interQuartile(Node* head)
{
    //code here
    Node* p4 = head->next->next->next;
    Node* p3 = head->next->next;
    Node* p2 = head->next;
    Node* p1 = head;
    float Q1, Q3;
    // int count = 1;
    while(true) {
      p4 = p4->next;
      if(p4) {
        p4 = p4->next;
        p3 = p3->next;
        if(p4) {
          p4 = p4->next;
          p3 = p3->next;
          p2 = p2->next;
          if(p4) {
            p4 = p4->next;
            p3 = p3->next;
            p2 = p2->next;
            p1 = p1->next;
            if(!p4) { // base 7
              Q1 = p1->value;
              Q3 = p3->value;
              break;
            }
          }
          else {
            Q1 = p1->next->value;
            Q3 = p3->value;
            break;
          }
        }
        else { // base 5
          Q1 = (p1->value / 2.0 + p1->next->value / 2.0);
          Q3 = (p3->value / 2.0 + p3->next->value / 2.0);
          break;
        }
      }
      else { // base 4
        Q1 = (p1->value / 2.0 + p1->next->value / 2.0);
        Q3 = (p3->value / 2.0 + p3->next->value / 2.0);
        break;
      }
    }
    
    return Q3 - Q1;
}