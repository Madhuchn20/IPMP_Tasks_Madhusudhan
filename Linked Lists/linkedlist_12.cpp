#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void push(struct node **head, int data){
    struct node *temp=new node();
    temp->data=data;
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
void deletealt(struct node **head){
    struct node *current=*(head);
    struct node *next=current->next;
    if(*(head)==NULL){
        return;
    }
    while(current!=NULL && next!=NULL){
        current->next=next->next;
        free(next);
        current=current->next;
        if(current!=NULL){
            next=current->next;
        }
    }
}
int main(){
    struct node *head=NULL;
    int n,num;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter data: ";
        cin>>num;
        push(&head,num);
    }
    printlist(head);
    deletealt(&head);
    printlist(head);
    return 0;
}
