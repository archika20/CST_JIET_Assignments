#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Please enter a digit: ";
	cin>>number;
	
	if(number == 0 || number == 1)
	{
		cout<<"Sqaure root of the given number is :"<<number;
	}
	
	int start = 1, end = number, mid, result ;
	while(start <= end)
	{
	    mid = (start + end)/2;
	    if(mid*mid == number)
	    {
	    	cout<<"Square root is: "<<mid;
		}
		else if (mid*mid < number)
		{
			start = mid + 1;
			result = mid;
		}
		else
		    end = mid - 1;
	}
	cout<<"Sqaure root is: "<<result;
}
