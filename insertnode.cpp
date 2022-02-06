#include<bits/stdc++.h>
using namespace std;
#include"takeinputclass.cpp"
node* takeinput(){
	int data;
	cin>>data;
	node* head=NULL;
	node* tail=NULL;
	while(data!=-1){
		node* newnode = new node(data);
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
node* insert(node* head,int i,int data){
	node* newnode=new node(data);
	node* temp=head;
	int count=0;
	if(i==0){
		newnode->next=head;
		head=newnode;
		return head;
	}
	while(temp!=NULL &&count<i-1){
     temp=temp->next;
     count++;
	}
newnode->next=temp->next;
temp->next=newnode;
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
 	cin>>i;
 	cin>>data;
  head=insert(head,i,data);
 	print(head);
 	return 0;
 }