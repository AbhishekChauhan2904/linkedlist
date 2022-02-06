#include<bits/stdc++.h>
using namespace std;
#include "takeinputclass.cpp"
node* takinput(){
	int data;
	cin>>data;
	node* head=NULL;
	node* tail=NULL;
	while(data!=-1){
		node* newnode=new node(data);
		if(head==NULL){
			head=newnode;
			tail=newnode;
		}else{
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}
node* deletel(node* head,int i){
	node* temp=head;
	node* del=NULL;
int count=0;
	if(i==0){
		head=temp->next;
		delete(head);
	}
	else{
		while(i!=count&&temp!=NULL){
			del=temp;
			temp=temp->next;
			count++;
		}
		if(temp!=NULL){
			del->next=temp->next;
			delete(del);
		}
	}
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
    node* head=takinput();
    int i;
    cin>>i;
    head=deletel(head,i);
print(head);
    return 0;
}