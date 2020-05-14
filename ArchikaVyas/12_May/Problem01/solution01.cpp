#include<iostream>
#define N 3

using namespace std;
 
int main ()
{ 
  
  int count=0,i,j;  
  int arr[N][N];
   
  //Input matrix elements
    cout << "Enter elements "<< N*N <<" of array:" << endl;
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
			int sum = 0; 
  	        bool isPrime = true;
  	 
            if (i - 1 >= 0) 
                sum += arr[i - 1][j]; 
  
            if (i + 1 < N) 
                sum += arr[i + 1][j]; 
  
            if (j - 1 >= 0) 
                sum += arr[i][j - 1]; 
   
            if (j + 1 < N) 
                sum += arr[i][j + 1]; 
                
            
			for(int k=2;k <= sum/2;k++)
		    {
		      if (sum % k == 0) 
			  {
		         isPrime = false;
		         break;
		      }
		   }
		   if (isPrime)
		      count++;     
                	
		}
		
	}
  
  cout <<"Output: "<< count <<endl; 
}
