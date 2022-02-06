#include<bits/stdc++.h>
using namespace std;
#include "takeinputclass.cpp"
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
node* findmid(node* head){
	node* slow=head;
	node* fast=head->next;
	if(head==NULL){
		return slow;
	}
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
   return slow;
}
int main(){
	node* head=takeinput();
  node* mid= findmid(head);
   cout<<mid->data<<endl;
	return 0;
}