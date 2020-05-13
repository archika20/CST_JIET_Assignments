#include<iostream>
#define N 3

using namespace std;

int main()
{
	int arr[N][N];
	int search=0,i,j,flag = 0;;
	
	cout<<"Please enter "<<N*N<<" elements:"<<endl;
	for(i = 0; i < N; i++)
	{
		for(j = 0;j < N; j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Enter the number which you want to search: ";
	cin>>search;
	
	for(i = 0; i < N; i++)
	{
		for(j = 0;j < N; j++)
		{
			if(search == arr[i][j])
		    	flag = 1;		
		}
	}
	
	if(flag == 1)
		cout<<"Number Found at ("<<i<<","<<j<<")"<<endl;
	else
		cout<<"Number not Found"<<endl;
		
	
}
