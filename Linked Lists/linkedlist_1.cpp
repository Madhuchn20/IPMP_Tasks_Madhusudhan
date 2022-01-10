#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * next;
};
void push(struct node **head, int data){
    struct node* temp=new node();
    temp->data=data;
    temp->next=NULL;
    if(*(head)==NULL){
        *(head)=temp;
    }
    else{
        struct node* current=*(head);
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
}
int nodefromend(struct node *head, int end){
    struct node *temp=head;
    struct node *current=head;
    if(head==NULL){
        return -1;
    }
    for(int i=1;i<end;i++){
        temp=temp->next;
    }
    while(temp->next){
        temp=temp->next;
        current=current->next;
    }
    return current->data;
}
int main(){
    struct node *head=NULL;
    int n,num,end;
    cout<<"Enter the length of the list: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter number: ";
        cin>>num;
        push(&head, num);
    }
    cout<<"Enter node from end you want to print: ";
    cin>>end;
    if(end>n){
        cout<<-1<<endl;
    }
    else{
        cout<<nodefromend(head,end)<<endl;
    }
    return 0;
}
