#include<bits/stdc++.h>
using namespace std;
#include "takeinputclass.cpp"
node* merge(node* head1,node* head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	if(head1->data<head2->data){
		head1->next=merge(head1->next,head2);
		return head1;
	}
	else{
		head2->next=merge(head1,head2->next);
		return head2;
	}
}
node* takeinput1(){
	int data;
	cin>>data;
	node* head1=NULL;
	node* tail=NULL;
	while(data!=-1){
		node* newnode=new node(data);
		if(head1==NULL){
			head1=newnode;
			tail=newnode;
		}
		else{
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head1;
}
void print(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}

}
node* takeinput2(){
	int data;
	cin>>data;
	node* head2=NULL;
	node* tail=NULL;
	while(data!=-1){
		node* newnode=new node(data);
		if(head2==NULL){
			head2=newnode;
			tail=newnode;
		}
		else{
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head2;
}
int main(){
	node* head1=takeinput1();
	node* head2=takeinput2();
	node* head3=merge(head1,head2);
	print(head3);
	return 0;
}