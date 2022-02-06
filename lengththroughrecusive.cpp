#include<bits/stdc++.h>
using namespace std;
#include "takeinputclass.cpp"
int recursion(node* head){
	if(head==NULL){
		return 0;
	}
	else{
		return recursion(head->next)+1;
	}
}
node* takeinput(){
int data ;
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
 int main(){
node* head=takeinput();
    int count=recursion(head);
    cout<<count<<endl;
 	return 0;
 }