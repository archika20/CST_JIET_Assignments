#include<iostream>

using namespace std;

int main()
{
	int arr[] = {1,1,2,2,3,4,4,5,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	int i ,result = arr[0];
	
	for(i = 1;i < len; i++)
	{
		result = result ^ arr[i];
	}
	
	cout<<"Print the single number:"<<result<<endl;
}
