#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    
int num, sum = 0, temp, digits = 0;
cout << "Enter a number: ";
cin >> num;
temp = num;
while(temp > 0)
{
    temp = temp / 10;
    digits++;
}
temp = num;
while(temp > 0)
{
    int last = temp % 10;
    sum += pow(last, digits);
    temp = temp / 10;
}
if(sum == num)
{
    cout << num << " is an Armstrong number." << endl;
}
else
{
    cout << num << " is not an Armstrong number." << endl;
}

    return 0;
}