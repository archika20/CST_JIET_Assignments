/*
WAP to create a class with two data members, meter and
centimeter, for storing height of a person. Then you need to create
two objects, take height input and then assign addition of height of
to another object. Make sure to keep data members of class private
and perform all operations using member functions.
*/

#include<iostream>

using namespace std;

class Height
{
	float meter;
	float centimeter;
	
	public:
		void get()
		{
			cout<<"Please enter Height informatin in m and cm: "<<endl;
			cin>>meter>>centimeter;
		}
		
		Height add(Height& h)
		{
			Height a;
			a.meter = meter + h.meter;
			a.centimeter = centimeter + h.centimeter;
			return a;
		}
		
		void print()
		{
			cout<<"Addition of two height objects is: "<<meter<<" m "<<centimeter<<" cm"<<endl;
		}
};

int main()
{
	Height h1,h2,h3;
	h1.get();
	h2.get();
	h3 = h1.add(h2);
	h3.print();
	
	return 0;
}
