#include<stdio.h>
struct Node
{
    int data;
    Node* next = NULL;
};

Node * insert(Node* head,int data){
    Node* temp = head;
    Node* newNode = new Node();
    newNode->data = data;
    if(head == NULL){
        head = newNode;
    }else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}


Node* deleteNode(Node* head){
    if(head == NULL){
        printf("list is empty");
    }
    else{
        head = head->next;
    }
    return head;
}

int getFront(Node* head){
    return head->data;
}
int getRear(Node* head){
    Node* temp = head;
     while(temp->next != NULL){
            temp = temp->next;
        }
    return temp->data;
}
int main(int argc, char const *argv[])
{
    Node* myqueue = NULL;
    myqueue = insert(myqueue,40);
    myqueue = insert(myqueue,50);
    myqueue = insert(myqueue,75);
    myqueue = deleteNode(myqueue);
    printf("current front : %d,Rear : %d",getFront(myqueue),getRear(myqueue));
    return 0;
}
