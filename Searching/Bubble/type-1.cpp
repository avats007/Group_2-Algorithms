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

void bubble_sort(int nums[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(nums[j]>nums[j+1])
			{
				temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;
			}
		}
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
	
	bubble_sort(nums,n);
	
	display(nums,n);
	return 0;
}
