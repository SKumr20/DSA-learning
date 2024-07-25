/*
    *
   ***
  *****
 *******



*/



#include <iostream>

using namespace std;

int main(void)
{   
    int n;
    cin>>n;

    for (int i=0; i<n; i++)
    {
        //Spaces
        for (int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        //Stars
        for (int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        //Spaces
        for (int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<" "<<endl;
    }
}