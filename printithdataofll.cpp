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
void find(node* head,int i){
	int count=0;
	node* tail =head;
	while(tail!=NULL){
		if(count==i){
			cout<<tail->data;
			return;
		}
		count++;
		tail=tail->next;
	}
	return;
}
/*void find(node *head, int i) {
     int count = 0;
    node *tail = head;
    while(tail != NULL){
        if(count == i){
            cout<< tail->data;
            return;
        }
        count++;
        tail = tail->next;
    }
    return;
    
}*/
int  main(){
	node* head=takeinput();
	int i;
	cin>>i;
    find(head,i);
       return 0;
}