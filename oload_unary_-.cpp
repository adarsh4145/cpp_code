#include<iostream>
using namespace std;
class vector{
	int x,y,z;
	public:
		void getdata(){
			cout<<"enter values of x,y,z"<<endl;
			cin>>x>>y>>z;
		}
		void operator- (){
			x=-x;
			y=-y;
			z=-z;
		}
		void showdata(){
			cout<<"values of x,y,z are: "<<endl;
			cout<<"x= "<<x<<endl;
			cout<<"y= "<<y<<endl;
			cout<<"z= "<<z<<endl;
		}
};
int main(){
	vector a;
	a.getdata();
	a.showdata();
	-a;
	a.showdata();
	return 0;
}
