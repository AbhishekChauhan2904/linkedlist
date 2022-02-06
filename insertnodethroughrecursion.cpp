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
node* insertnode(node* head,int i,int data){
	if(head==NULL){
		return head;
	}
	node* newnode=new node(data);
	node* temp=head;
	if(i==0){
		newnode->next=temp;
		temp=newnode;
		return temp;
	}
	node* x=insertnode(head->next,i-1,data);
	head->next=x;
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
 	int data;
 	cin>>i>>data;
 	head=insertnode(head,i,data);
 	print(head);
 	return 0;
 }