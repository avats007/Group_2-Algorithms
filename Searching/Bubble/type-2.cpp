
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
void input(int nums[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
}

void bubble_sort(int arr[], int n) {
    bool x;
    int temp;
    do {
        x = false;
        for (int i = 0; i < (n - 1); i++) {
            if (arr[i] > arr[i + 1]) 
			{
                x = true;
                for (int i=0; i < (n - 1); i++) {
                    if (arr[i] > arr[i + 1]) {
                        {
                        	temp = arr[i];
                        	arr[i] = arr[i+1];
                        	arr[i+1] = temp;
						}
                    }
                }
            }
        }
    } while (x);
}
 
void display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
        cout << arr[i]<<" ";
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
