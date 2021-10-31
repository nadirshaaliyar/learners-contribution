/*24. Write a program to print the second largest number among a set of numbers*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the contents of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Sorting the array
    int temp;
    for(int i=0;i<n;i++)
     for(int j=i+1;j<n;j++)
     {
         if(arr[j]<arr[i])
         {
             temp = arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
     }
    cout<<"\nThe Second Largest Number is :"<<arr[n-2];
    return 0;
}