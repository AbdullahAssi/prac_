#include<iostream>
using namespace std;
int main()
{
    int array[15];
	int composite[]={};
	int prime[]={};
    bool flag=false;
    cout<<"Enter 15 numbers:";
    for (int i=0; i<15; i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<15;i++)
    {
        flag=false;
        for (int j=2; j<=array[i]/2; j++)
        {
            if (array[i]%j==0)
            {
                flag=true;
            }
        }
        if (flag||array[i]==1)
        {
            composite[i]=array[i];
        }
        else
        {
            prime[i]=array[i];
        }
    }
    
    cout<<"Prime numbers are:"<<endl;
    for (int i=0; i<15; i++)
    {
        if (prime[i]!=0)
        {
            cout<<prime[i]<<" ";
        }
    }
    
    cout<<endl<<"Composite numbers are:"<<endl;
    for (int i=0; i<15; i++)
    {
        if (composite[i]!=0)
        {
            cout<<composite[i]<<" ";
        }
    }
    return 0;
}
