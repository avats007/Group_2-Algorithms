#include<iostream>
using namespace std;

void input(int nums[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
}

void display(int nums[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<nums[i]<<" ";
	}
}

void selection_sort(int nums[],int n)
{
	int temp,min;
	for(int i=0;i<n-1;i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{
			if(nums[j]<nums[min])
			{
				min = j;
			}
		}
		
		temp = nums[i];
		nums[i] = nums[min];
		nums[min] = temp;
		
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
	
	selection_sort(nums,n);
	
	display(nums,n);
	return 0;
}
