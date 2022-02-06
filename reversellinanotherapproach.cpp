#include<bits/stdc++.h>
using namespace std;
#include"takeinputclass.cpp"
node* reverse(node* head){
	if(head==NULL|| head->next==NULL){
		return head;
	}
	node* ans=reverse(head->next);
	node* tail=head->next;
	tail->next=head;
	head->next=NULL;
	return ans;
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
    node* finalhead=reverse(head);
	print(finalhead);
	return 0;
}