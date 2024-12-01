/*
 this code is for singly linked list all important functions
 Q1 of practice
*/

#include <iostream>
using namespace std;

class Node {
public:
    Node* next;
    int data;

    Node(int value){
        this->next = NULL;
        this->data = value;
    }
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList(){
        head = NULL;
    }

    void insertathead(int value){
        Node* newnode = new Node(value);
        newnode->next = head;
        head = newnode;
    }

    void insertattail(int value){
        Node* newnode = new Node(value);
        if(head==NULL){
            head = newnode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next= newnode;
    }

    void insertafternode(int target, int data){
        Node* temp = head;
        while (temp->next != NULL && temp->data != target){
            temp = temp->next;
        }
        if (temp== NULL){
            cout<<"target not found"<<endl;
            return;
        }
        Node* newnode = new Node(data);
        newnode->next = temp->next;
        temp->next = newnode;
    }





};



int main(){

    return 0;
}