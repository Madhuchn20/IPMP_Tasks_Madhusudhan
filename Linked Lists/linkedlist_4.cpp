#include<bits/stdc++.h>
using namespace std;
struct node{
    char data;
    struct node *next;
};
void push(struct node **head, char data){
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
        cout<<head->data;
        head=head->next;
    }
    cout<<endl;
}
bool palindrome(struct node *head){
    struct node *temp=head;
    stack<char>s;
    if(head==NULL){
        return false;
    }
    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }
    while(head!=NULL){
        if(head->data!=s.top()){
            return false;
        }
        s.pop();
        head=head->next;
    }
    return true;
}
int main(){
    struct node *head=NULL;
    int n;
    char data;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter data: ";
        cin>>data;
        push(&head,data);
    }
    printlist(head);
    cout<<palindrome(head)<<" ";
    return 0;
}
