#include<iostream>
using namespace std;
int main()
{
   int num,rev=0;
   cout<<"Enter a number: ";
   cin>>num;
    while(num>0)
    {
        int last=num%10;
        rev=rev*10+last;
        num=num/10;
    }
    cout<<"Reverse of the number is: "<<rev<<endl;
    return 0;     
}