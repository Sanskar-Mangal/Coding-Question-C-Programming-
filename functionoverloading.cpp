#include<iostream>
using namespace std;

	void display(){
		cout<<"welcome"<<endl;
	}
	void display(int n){
		for(int i=0;i<n;i++){
			cout<<"*";
			
		}
		cout<<endl;
	}
	void display(int n, int m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<"*";
				
			}
			cout<<endl;
		}
	}
int main(){
	display();
	display(5);
	display(3,4);
}

