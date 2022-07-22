#include <iostream>
using namespace std ;
class a{
	protected :
	int 	num1;
	public :
				a():num1(40){cout <<"default constructor called 1"<<endl;
		}
		a(int aa): num1(aa){cout <<"parameterized constructor called 1"<<endl;
		}
		
		void display ()
		
{
	cout <<num1<<endl;
}
    ~a (){ cout <<"destructor called 1"<<endl;
	}
};
class b: public a
{
	protected :
	int 	num2;
	public :
				b():num2(42){cout <<"default constructor called 2"<<endl;
		}
		b(int bb):num2(bb){cout <<"parameterized constructor called 2"<<endl;
		}
		
		void display ()
		
{
	cout <<num2<<endl;
}
    ~b (){ cout <<"destructor called 2"<<endl;
	}
};
class c : public b {
		protected :
	int 	num3;
	public :
				c():num3(45){cout <<"default constructor called 3"<<endl;
		}
		c(int cc):num3(cc){cout <<"parameterized constructor called 3"<<endl;
		}
		
		void display ()
		
{
	cout <<num3<<endl;
}
    ~c (){ cout <<"destructor called 3"<<endl;
	}
};
int main ()
{
	c t,g(87);

	t.display();
	g.display();

	return 0;
	

}
