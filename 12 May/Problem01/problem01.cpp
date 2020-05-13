#include<iostream>
#define N 2
using namespace std;

int main()
{
	int arr[N][N], result;
	
	cout<<"Please enter "<<N*N<<" elements:-"<<endl;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	
	
	cout<<"Matrix is:-"<<endl;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	int count = 0, total =0;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i+j<N && i,j>0 && i,j<N-1)
			{
				total = arr[i+1][j] + arr[i][j+1] + arr[i-1][j] + arr[i][j-1];
				cout<<"["<<i<<"]"<<"["<<j<<"]"<<" = "<<total<<endl;
				
			}
			
		}
			
	}
	
	cout<<"Output : "<<count;
}
