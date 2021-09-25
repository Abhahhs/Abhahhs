#include <bits/stdc++.h>
using namespace std;
void left_rotate_by_one(int arr[], int n)
{


int temp = arr[0], i;
for (i = 0; i < n - 1; i++)
arr[i] = arr[i + 1];
arr[i] = temp;
}

void array_left_rotate(int arr[], int no_of_rotations, int n)
{
for (int i = 0; i < no_of_rotations; i++)
left_rotate_by_one(arr, n);   
}

int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
int n = sizeof(arr) / sizeof(arr[0]);   
cout<<"\nArray elements before rotating : \n";
for(int i = 0; i < n; i++)
{
cout<<arr[i]<<"\t";    
}
int no_of_rotations = 1;  
array_left_rotate(arr, no_of_rotations, n);
cout<<"\n\nArray elements after rotating : \n";
for(int i = 0; i < n; i++)
{
cout<<arr[i]<<"\t";  
} 
cout<<"\n";
return 0;
}
