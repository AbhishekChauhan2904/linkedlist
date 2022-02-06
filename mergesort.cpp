#include<bits/stdc++.h>
using namespace std;
#include"takeinputclass.cpp"
node* findmid(node* head){
	node* slow=head;
	node* fast=head;
	while(fast->next!=NULL && fast->next->next){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}
node* merge(node* head1,node* head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	node* head=NULL;node* tail=NULL;
	if(head1->data<head2->data){
		head=head1;
		tail=head1;
		head1=head1->next;
	}
	else{
		head=head2;
		tail=head2;
		head2=head2->next;
	}
	while(head1!=NULL && head2!=NULL){
		if(head1->data<head2->data){
			tail->next=head1;
			tail=head1;
			head1=head1->next;
		}
		else{
			tail->next=head2;
			tail=head2;
		    head2=head2->next;
		}
	}
	if(head1!=NULL){
		tail->next=head1;
	}
	if(head2!=NULL){
		tail->next=head2;
	}
	return head;
}
node* mergeSort(node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node* mid=findmid(head);
	node* half1=head;
	node* half2=mid->next;
	mid->next=NULL;
	half1 = mergeSort(half1);
	half2 =mergeSort(half2);
	node* finalhead=merge(half1,half2);
	return finalhead;

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
	node* finalhead=mergeSort(head);
	print(finalhead);
}