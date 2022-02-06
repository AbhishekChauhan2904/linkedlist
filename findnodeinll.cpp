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
int findnode(node* head,int n){
	node* temp=head;
	int count=0;
	while(temp!=NULL && n!=temp->data){
		temp=temp->next;
		count++;
	}
	if(temp==NULL){
		return -1;
	}
	return count;
}
int main(){
	 node* head=takeinput();
	 int data;
	 cin>>data;
	 int n=findnode(head,data);
      cout<<n<<endl;
	 return 0;
}