#include <iostream>
using namespace std ;
class a{
	int l;
	public:
	a():l(40){
	}
		void display ()
		
{
	cout <<l<<endl;
}};
class b:  virtual public a{
	int m;
	public:
	b():m(80){
	}
		void display1 ()
		
{
	cout <<m<<endl;
}};
class c:virtual public a{
	int n;
	public:
	c():n(90){
	}
		void display2 ()
		
{
	cout <<n<<endl;
}};
class d:public b,public c{
	public :
	
	};
int main ()
{
	d t;
	t.display();
	
	return 0;
}

	
	
