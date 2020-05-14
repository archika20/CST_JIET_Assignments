/*
WAP that has two functions named ‘area’ first version will calculate
area of triangle based on height and base, and second version will
calculate area of triangle based on dimension of three sides.
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

class Triangle
{
	public:
		int areaTriangle(int h, int b)
	   {
	   	 cout<<"Function called with 2 parameters"<<endl;
		 int area = .5*b*h;
		 return area;
	   }
	   
	   int areaTriangle(int a, int b, int c)
	   {  
	      cout<<endl<<"Function called with 3 parameters"<<endl;
	      int s = (a+b+c)/2;
	   	  int area = sqrt(s*(s-a)*(s-b)*(s-c));
	   	  return area;
	   }
	   
	   void display(int d)
	   {
	   	  cout<<"Area of Triangle is: "<<d<<endl;
	   }
};

int main()
{
	Triangle t1,t2;
	int a = t1.areaTriangle(5,5);
	t1.display(a);
	int b = t1.areaTriangle(27,12,21);
	t1.display(b);
}
