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
void print(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
 int main(){
 	node* head=takeinput();
 	print(head);
 	return 0;
 }