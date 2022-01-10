#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void push(struct node ** head, int data){
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
void deletelist(struct node **head){
    struct node *temp=NULL;
    struct node *current=*(head);
    while(current!=NULL){
        temp=current->next;
        free(current);
        current=temp;
    }
    *(head)=NULL;
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
    cout<<"Deleting linked list.."<<endl;
    deletelist(&head);
    cout<<"List has been deleted.";
    return 0;
}
