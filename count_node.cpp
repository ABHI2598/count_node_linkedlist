#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node * next;
};

void push(Node ** head_ref , int new_value){
    Node * new_node = new Node();
    new_node->data = new_value;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int getCount(Node * head){
    int count = 0;
    Node * current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}
void printlist(Node * node){
    while(node!= NULL){
        cout <<" "<<node->data;
        node = node->next;
    }
}

int main(){
    Node * head = NULL;
    cout<<"Linked list : "<<endl;
    push(&head , 1);
    push(&head , 2);
    push(&head , 3);
    push(&head , 4);
    push(&head , 5);
    push(&head , 6);
    printlist(head);
    cout<<endl;
    cout<<"After counting :";
    cout<< getCount(head);

    return 0;
}
