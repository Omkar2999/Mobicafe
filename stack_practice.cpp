#include<bits/stdc++.h>
using namespace std;
class Stack{
	public:
		int stack[50];
		int maxsize=50;
		int top=-1;	public: 
	int getTop();
	int isFull();
	int isEmpty();
	void push(int element);
	int pop();

		
};

int Stack::isEmpty(){
	if(top==-1)
		return 1;
	else
		return 0;
}
int Stack::isFull(){
	if(top==maxsize-1)
		return 1;
	else
		return 0;
}

int Stack::getTop(){
	return stack[top];
	
}

void Stack::push(int element){
	if(!isFull())
	stack[++top]=element;
	
}
int Stack::pop(){
	return stack[top--];
}




int main(){
	Stack s;
	int n;
	cout<<"How many elements you want to insert: ";
	cin>>n;
	for(int i=1;i<=n;i++) 
	s.push(i);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;	

	
}
