#include<bits/stdc++.h>
using namespace std;
#include"takeinputclass.cpp"
node* takeinput(){
	int data;
	cin>>data;
	node* head=NULL;
	node* tail=NULL;
	while(data!=-1){
     node* newnode=new node(data);
     if(head==NULL){
     	head=newnode;
     	tail=newnode;
     }
     else{
     	tail->next=newnode;
     	tail=tail->next;
     }
     cin>>data;
	}
	return head;
}


node* append(node* head,int n){
	node* temp=head;
	node* t=head;
	int i=-n;
	while(i<n-1) {
      if(i>=0) 
            t = t -> next;
            temp=temp -> next;
            i++;
    }
    temp -> next = head;
    head = t -> next;
    t -> next = NULL;
    return head;
}
void print(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	node* head=takeinput();
	int i;
	cin>>i;
 head=append(head,i);
	print(head);
	return 0;
}