#include<iostream>
using namespace std;
class BankAccount
{
    private:
    string account_number;
    double balance;
    public:
    void setdata(string acc_num, double bal)
    {
        account_number = acc_num;
        balance = bal;
    }
    void getdata()
    {
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    BankAccount b1;
    b1.setdata("194941011399", 50000);
    b1.getdata();
    return 0; 