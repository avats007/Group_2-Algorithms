
#include<iostream>
using namespace std;
void input(int nums[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
}

void merge(int nums[],int n,int l,int mid,int r)
{
	int n1 = mid-l+1;
	int n2 = r-mid;
	
	int a[n1];
	int b[n2];
	
	for(int i=0;i<n1;i++)
	{
		a[i] = nums[l+i];
	}
	
	for(int i=0;i<n2;i++)
	{
		b[i] = nums[mid+1+i];
	}
	
	int i=0,j=0,k=l;
	
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			nums[k] = a[i];
			i++;
			k++;
		}
		
		else
		{
			nums[k] = b[j];
			j++;
			k++;
		}
	}
	
	while(i<n1)
	{
		nums[k]= a[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		nums[k]= b[j];
		j++;
		k++;
	}
}
void merge_sort(int nums[],int n,int l,int r)
{
	int mid;
	if(l<r)
	{
		mid = (l+r)/2;
		merge_sort(nums,n,l,mid);
		merge_sort(nums,n,mid+1,r);
		
		merge(nums,n,l,mid,r);
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
    merge_sort(nums,n,l,r);
	
	cout<<"Sorted array is: ";
	display(nums,n);
	
	return 0;
}
