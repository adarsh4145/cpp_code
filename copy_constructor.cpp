#include<iostream>
using namespace std;
class code{
	int id;
	public:
		code(){};
		code(int a){id=a;}
		code(code &x){
			id=x.id;
		}
		void display(void){
			cout<<id;
		}
};
int main(){
	code a(100);
	code b(a);
	code c=a;
	code d;
	d=a;
	a.display();
	cout<<"a"<<endl;
	b.display();
	cout<<"b"<<endl;
	c.display();
	cout<<"c"<<endl;
	d.display();
	cout<<"d"<<endl;
}
