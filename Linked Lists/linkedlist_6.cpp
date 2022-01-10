#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
    int flag;
};
void push(struct node **head, int num){
    struct node *temp=new node();
    temp->data=num;
    temp->next=NULL;
    temp->flag=0;
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
int length(struct node *head){
    int l=0;
    while(head!=NULL){
        head=head->next;
        l++;
    }
    return l;
}
void addloop(struct node **head,int pos, int n){
    struct node *current=*(head);
    struct node *temp=*(head);
    while(current->next!=NULL){
        current=current->next;
    }
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    current->next=temp;
}
bool detectloop(struct node *head){
    struct node *slow=head;
    struct node *fast=head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
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
    cout<<detectloop(head)<<endl;
    cout<<"Enter position you want to add loop: ";
    cin>>pos;
    if(pos>length(head)||pos<1){
        cout<<detectloop(head)<<endl;
    }
    else{
        addloop(&head,pos,length(head));
        cout<<detectloop(head)<<endl;
    }
    return 0;
}



