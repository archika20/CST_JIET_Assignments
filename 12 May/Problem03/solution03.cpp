#include<iostream>
#define N 4

using namespace std;

int main()
{
	int arr[N][N];
	int search=0, i, j, flag = 0, count = 0;
	
	cout<<"Please enter "<<N*N<<" elements:"<<endl;
	for(i = 0; i < N; i++)
	{
		for(j = 0;j < N; j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Matrix is: "<<endl;
	for(i = 0; i < N; i++)
	{
		for(j = 0;j < N; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	for(i = 0; i < N; i++)
	{
		for(j = 0;j < N; j++)
		{
			if(arr[j][i] == 1)
			{
				count++;
			}		
		}
		if(count%2 != 0)
		{
			flag++;
			count = 0;
		}
	}
	
	cout<<"Output: "<<flag;
	
}
