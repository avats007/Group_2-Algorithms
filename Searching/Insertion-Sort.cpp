
#include<iostream>
using namespace std;
void input(int nums[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
}

void insertion_sort(int nums[],int n)
{
	int temp,j;
	for(int i=1;i<n;i++)
	{
		temp = nums[i];
		j=i-1;
		
		while(j>=0 && nums[j] > temp)
		{
			nums[j+1] = nums[j];
			j=j-1;
		}
		nums[j+1] = temp;
	}
}

void display(int nums[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<nums[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the size of the array\n";
	cin>>n;
	int nums[n];
	
	cout<<"Enter the array\n";
	input(nums,n);
	
	insertion_sort(nums,n);
	
	cout<<"Sorted array is: ";
	display(nums,n);
	
	return 0;
}
