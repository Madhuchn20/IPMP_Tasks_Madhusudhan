#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void push(struct node **head, int num){
    struct node *temp=new node();
    temp->data=num;
    temp->next=NULL;
    if(*(head)==NULL){
        *(head)=temp;
    }
    else{
        struct node *current=*(head);
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=temp;
    }
}
void printlist(struct node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void reverselist(struct node **head){
    struct node *prev=NULL;
    struct node *current=*(head);
    struct node *next;
    if(*(head)==NULL){
        return;
    }
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *(head)=prev;
}
int main(){
    struct node *head=NULL;
    int n,num;
    cout<<"Enter the number of nodes in the list: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter data: ";
        cin>>num;
        push(&head,num);
    }
    printlist(head);
    reverselist(&head);
    printlist(head);
    return 0;
}
