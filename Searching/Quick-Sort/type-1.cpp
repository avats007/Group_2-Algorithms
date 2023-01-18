
#include<iostream>
using namespace std;
void input(int nums[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
}

int partition(int nums[],int n,int l,int r)
{
     int temp;
     int pivot = nums[r];
     int i = l-1;
     
     for(int j=l;j<r;j++)
     {
     	if(nums[j] < pivot)
     	{
     		i++;
     		temp = nums[j];
     		nums[j] = nums[i];
     		nums[i] = temp;
		  }
	  }
	 temp = nums[i+1];
	 nums[i+1] = nums[ r];
	 nums[r] = temp;
	 
	 return i+1;

}
void quick_sort(int nums[],int n,int l,int r)
{
	int p;
	if(l<r)
	{
		p = partition(nums,n,l,r);
		quick_sort(nums,n,l,p-1);
		quick_sort(nums,n,p+1,r);
	
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
	
	int l=0,r=n-1;
    quick_sort(nums,n,l,r);
	
	cout<<"Sorted array is: ";
	display(nums,n);
	
	return 0;
}
