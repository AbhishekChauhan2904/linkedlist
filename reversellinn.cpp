#include<bits/stdc++.h>
using namespace std;
#include "takeinputclass.cpp"
class Pair {
public:
node* head;
node* tail;	
};
Pair reverse1(node* head){
	if(head == NULL || head->next ==NULL){
		Pair ans;
		ans.head=head;
		ans.tail=head;
		return ans;
	}
	Pair smalloutput=reverse1(head->next);
	smalloutput.tail->next=head;
	head->next=NULL;
	Pair ans;
	ans.head=smalloutput.head;
	ans.tail=head;
	return ans;
}
node* reverse(node* head){
	return reverse1(head).head;
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
}
int main(){
node* head=takeinput();
node* finallyhead=reverse(head);
print(finallyhead);
return 0;
}