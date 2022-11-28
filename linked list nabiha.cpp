#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class Node{

public:
    int obj = 0;
    Node *next;
};


class LinkedList{

private:
    Node *head;
    Node *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }

    void createNewNode(int obj){
        Node *temp = new Node();
        temp->obj = obj;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
        }

    void ShowList(){
        while(head->obj != NULL){
            cout<<head->obj<< " ";
            head = head->next;
        }
    }
};

int main()
{
    LinkedList *myList = new LinkedList();

    LinkedList obj1;
    obj1.set(30);

    //example* obj2 = new example();
    //obj2->set(10);

    LinkedList* obj2 = new LinkedList();
    obj2->set(50);

    LinkedList* obj3 = new LinkedList();
    obj3->set(70);

    LinkedList* obj4 = new LinkedList();
    obj4->set(10);

    LinkedList* obj5 = new LinkedList();
    obj5->set(90);

   //LinkedList *myList = new LinkedList();



   //myList->createNewNode(30);
   //myList->createNewNode(50);
   //myList->createNewNode(70);
   //myList->createNewNode(10);
   //myList->createNewNode(90);
   //myList->ShowList();

    return 0;
}
