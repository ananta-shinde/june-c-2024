#include<stdio.h>
struct  Node
{
    int data;
    Node* next;
};

Node* push(Node* head,int data){
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

Node* pop(Node* head){
    if(head ==NULL){
        printf("List is empty");
    }else{
        head = head->next;
    }
    return head;
}

int getTop(Node* head){
    return head->data;
}


int main(int argc, char const *argv[])
{
    Node* mystack = NULL;
    mystack = push(mystack,55);
    mystack = push(mystack,56);
    mystack = push(mystack,40);
    mystack = pop(mystack);
    printf("current top :%d",getTop(mystack));
    return 0;
}
