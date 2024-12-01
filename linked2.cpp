/*
using all fucntionalities for doubly linked list
this is prac number 2
*/

#include <iostream>
using namespace std;

class Node{
public:
    Node* next;
    Node* prev;
    int data;

    Node(int value){
        this->data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList{
private:
    Node* head;

public:
    DoublyLinkedList(){
        head = NULL;
    }

    void insertathead(int data){
        Node* newnode = new Node(data);
        if (head != NULL){
            head->prev = newnode;
        }
        newnode->next = head;
        head = newnode;
    }

    void insertattail(int data){
        Node* newnode = new Node(data);
        if(head==NULL){
            head = newnode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev= temp;
    }

};

    

int main(){




    return 0;
}