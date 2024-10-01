#include<stdio.h>
struct Node
{
    int data;
    Node* next = NULL;
};

Node* insertAtStart(Node* head,int data){
    Node* temp = head;
    Node* newNode = new Node();
    newNode->data = data;
    if(head == NULL){
        head = newNode;
    }else{
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node * insertAtEnd(Node* head,int data){
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

Node* deleteAtStart(Node* head){
    if(head == NULL){
        printf("list is empty");
    }
    else{
        head = head->next;
    }
    return head;
}

Node* deleteAtEnd(Node* head){
    Node* temp = head;
     if(head == NULL){
        printf("list is empty");
    }else{
        while(temp->next->next !=NULL){
            temp = temp->next;
        }
        temp->next = NULL;
    }
    return head;
}

void printList(Node* head){
    Node* temp = head;
    if(head == NULL){
        printf("List is empty");
    }else{
        while(temp != NULL){
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }
}

Node* deleteByvalue(Node* head,int value){
     Node* temp = head;
    if(head == NULL){
        printf("List is empty");
    }else{
        if(head->data == value){
            deleteAtStart(head);
        }else{
            while(temp->next->data != value){
                temp =  temp->next;
            }
            Node* nextNode = temp->next->next;
            temp->next = nextNode;
        }
        return head;
    }
}

int lengthList(Node* head){
    Node* temp = head;
    int count = 0;
    if(head == NULL){
        return 0;
    }else{
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    
}


Node* insertAtPosition(Node* head,int pos, int data)
{
    Node* temp = head;
    Node* newNode = new Node();
    newNode->data = data;
    int count= 0;
    if(pos>lengthList(head)){
        printf("invalid position");
    }else{
        while(temp !=NULL){
            if(count == pos-1){
                break;
            }
            count++;
            temp = temp->next;
            
            
        }
        
        newNode->next = temp->next;
        temp->next = newNode;
        
    }
    return head;
}

int main(int argc, char const *argv[])
{
   Node* list = NULL;
   list = insertAtStart(list,50);
   list = insertAtStart(list,60);
   list = insertAtStart(list,100);
   list = insertAtEnd(list,40);
//    list = deleteAtStart(list);
//    list = deleteAtEnd(list);
list  =  deleteByvalue(list,60);
printf("length of list : %d\n",lengthList(list));

list = insertAtPosition(list,10,45);
   printList(list);
    return 0;
}
