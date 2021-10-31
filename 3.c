/*3. Write a menu-driven program to implement a calculator. 
The user should have the option of performing multiple 
calculations without having to restart the program*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void add(int a, int b)
{
    int c = a+b;
    cout<<"\nSum (a+b):"<<c;
}

void sub(int a, int b)
{
    int c = a-b;
    cout<<"\nSubtraction (a-b):"<<c;
}

void mul(int a, int b)
{
    int c = a*b;
    cout<<"\nMultiply (a*b):"<<c;
}

void divide(int a, int b)
{
    float c = a/b;
    cout<<"\nDivide (a/b):"<<c;
}

int main()
{
    char choice;
    int option;
    int a, b;
    
    do{ 
        cout<<"\n\nCALCULATOR";
        cout<<"\n1. Add";
        cout<<"\n2. Subtract";
        cout<<"\n3. Multiply";
        cout<<"\n4. Divide";
        cout<<"\nEnter option:";
        cin>>option;
        cout<<"Enter a and b :";
        cin>>a>>b;
        switch(option)
        {
            case 1:add(a,b);
                   break;
            case 2:sub(a,b);
                   break;
            case 3:mul(a,b);
                   break;
            case 4:divide(a,b);
                   break;
            default : cout<<"\nWrong choice!";
                   
        }
        cout<<"\nDo you want to calculate again?(if yes, enter y/Y) :";
        cin>>choice;
    }while(choice=='y' || choice=='Y');
    return 0;
}