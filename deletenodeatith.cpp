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
node* deletel(node* head,int i){
	if(head==NULL){
		return head;
	}
	node* temp=head;
	if(i==0){
      head=temp->next;
      delete(temp);
      return head;
	}
   node* x=deletel(head->next,i-1);
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
    cin>>i;
    head=deletel(head,i);
    print(head);
	return 0;
}