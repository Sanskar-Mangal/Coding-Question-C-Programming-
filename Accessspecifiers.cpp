#include<iostream>
using namespace std;

class Demo{
	private:
		int a;
    public:
	   int b;
	public:
	   int c;
	void show(){
		a=10,b=20,c=30;
		cout<<a<<endl<<b<<endl<<c;
	}		
};
int main(){
	Demo obj;
	obj.show();
}
