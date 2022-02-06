#include<bits/stdc++.h>
using namespace std;
 #include"takeinputclass.cpp"
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
int length(node* head){
	int count=0;
	node* temp=head;
	while(temp!=NULL){
         temp=temp->next;
         count++;
	}
	return count;
}
 int main(){
 	node* head=takeinput();
 	int count=length(head);
 	cout<<count<<endl;
 	return 0;
 }