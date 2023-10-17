#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool flag= 0;
    int i;
    for (i<2;i<sqrt(a); i++)
    {
        if (a%i==0){
        cout<<"Number is not Prime : "<<endl;
        flag =  1;
        break;
        }
    }
    if(flag == 0)
    {
        cout<<"NUmber is Prime; ";
    }
}