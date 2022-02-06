#include<bits/stdc++.h>
using namespace std;
#include"takeinputclass.cpp"
node* re(node* head){
	node* prv=NULL;
	node* current=head;
	node* next=head;
	while(current!=NULL){
      next=next->next;
		current->next=prv;
		prv=current;
		current=next;
}
head=prv;
return head;
}
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
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	node* head=takeinput();
	node*finalhead=re(head);
	print(finalhead);
	return 0;
}