#include<iostream>
using namespace std;
struct node {
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
int middle(struct node *head){
    struct node *slow=head;
    struct node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}
int main(){
    struct node *head=NULL;
    int n,num,pos;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter data: ";
        cin>>num;
        push(&head,num);
    }
    printlist(head);
    cout<<middle(head)<<endl;
    return 0;
}
