#include <iostream>
using namespace std;
void input(int nums[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
}
 
void count_sort(int nums[], int n)
{
	int k = nums[0];
	int ans[n];
	for(int i=0;i<n;i++)
	{
		k = max(k,nums[i]);
	}
	
	int count[k] = {0};
	
	for(int i=0;i<n;i++)
	{
		count[nums[i]]++;
	}
    
    for(int i=1;i<=k;i++)
    {
    	count[i] += count[i-1];
	}
	
	for(int i=n-1;i>=0;i--)
	{
	    ans[--count[nums[i]]] = nums[i];
	}
	
	for(int i=0;i<n;i++)
	{
		nums[i] = ans[i];
	}
}

void printArray(int nums[], int n)
{
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << "\n";
}

int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    
    int nums[n];
    cout<<"Enter the array\n";
    input(nums,n);
    
    count_sort(nums,n);
 
    cout << "Sorted array is \n";
    printArray(nums,n);
}
