#include<stdio.h>

struct Node
{
    int data;
    Node* next = NULL;
};

Node* insertAtStart(Node* head,int data){
    Node* temp = head;
    Node* n = new Node();
    n->data = data;
    if(head == NULL)
    {
        head = n;
        
    }
    else{
        n->next = head;
        head = n;
        
    }
    return head;

}

Node* insertAtEnd(Node* head,int data){
    Node* temp = head;
    Node* n = new Node();
    n->data = data;
    if(head == NULL)
    {
        head = n;
        
    }
    else{
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        
    }
    return head;

}

Node* deleteAtStart(Node* head){
    if(head ==NULL){
        printf("List is empty");
    }else{
        head = head->next;
    }
    return head;
}

Node* deleteAtEnd(Node* head){
     Node* temp = head;
    if(head ==NULL){
        printf("List is empty");
    }else{
         while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
    return head;
}

Node* deleteByValue(Node* head, int value)
{
    Node* temp = head;
    if(head ==NULL){
        printf("List is empty");
    }else{
        if(head->data == value)
        {
            deleteAtStart(head);
        }else{
            while(temp->next->data != value){
                temp = temp->next;
            }
            Node* nextnode = temp->next->next;
            temp->next = nextnode;
        }
        return head;
    }

}




void printList(Node* head)
{
     Node* temp = head;
     if(head == NULL){
        printf("list is empty");
     }
     else{
        while(temp!= NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
     }
}



int main(int argc, char const *argv[])
{
    Node* list = NULL;
    list = insertAtStart(list,20);
    list = insertAtStart(list,40);
    list = insertAtStart(list,60);
    list = insertAtEnd(list,100);
    // list = deleteAtEnd(list);
    // list = deleteAtStart(list);
    list = deleteByValue(list,100);

    printList(list);
    return 0;
}


