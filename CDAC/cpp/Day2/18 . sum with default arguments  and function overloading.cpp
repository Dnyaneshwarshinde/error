#include <iostream>
using namespace std;
int sum(int a=0, int b=0, int c=0, int d=0) // default arguments
{
	cout<<"a="<<a<<"  b="<<b<<" c="<<c<<" d="<<d<<endl;
	return a+b+c+d;
}
int sum(int a, int b, int c, int d, int e) 
{
	cout<<"a="<<a<<"  b="<<b<<" c="<<c<<" d="<<d<<"e="<<e<<endl;
	return a+b+c+d+e;

}
int main()
{
	int result=0;
	result= sum(10, 20, 30,40); // a=10 b=20 c=30 d=40
	cout<<"result ="<<result<<endl;

	result= sum(10, 20, 30); // a=10 b=20 c=30 d=0
	cout<<"result ="<<result<<endl;

	result= sum(10, 20); // a=10 b=20 c=0 d=0
	cout<<"result ="<<result<<endl;

	result= sum(10); // a=10 b=0 c=0 d=0
	cout<<"result ="<<result<<endl;

	result= sum(); // a=0 b=0 c=0 d=0
	cout<<"result ="<<result<<endl;

	result= sum(10, 20, 30,40, 50); // a=10 b=20 c=30 d=40, e=50
	cout<<"result ="<<result<<endl;


	return 0;
}
