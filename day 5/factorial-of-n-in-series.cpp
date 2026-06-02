#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<"Factorial of "<<i<<" is: "<<factorial(i)<<endl;
    }
    cout<<"Factorial of "<<n<<" is: "<<factorial(n);
    return 0;
}


