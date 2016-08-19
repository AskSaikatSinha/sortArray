#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    cout<<"Enter the no. of strings";
    int n;
    cin>>n;

    char arr[n][50],temp[50];
    string str[n];
    cout<<"Enter the strings"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    cout<<endl;
    for (int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (str[i].length()<str[j].length())
            {
                string temp= str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    cout<<"Sorted list: ";
    for (int i=0;i<n;i++)
        cout<<str[i]<<" ";
}

