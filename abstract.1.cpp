#include<iostream>
using namespace std;
class demo
{
	virtual void fun ()=0;
	virtual void gun ()=0;
};
class ganesh :public demo
{
	public:
	void fun()
	{
		cout<<"am in ganesh fun"<<endl;
	}
};
class mahesh:public ganesh 
{
	public:
	void gun()
	{
		cout<<"am in mahesh fun"<<endl;
	}
};
main()
{
//	ganesh g;
//	g.fun();
	
	mahesh m;
	m.gun();
	m.fun();
}
