// Take a number from user, divide it by 3 and print the quotient and remainder
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    float remainder = num%3;
    float quotient = round(num/3);
    cout<<"Quotient is "<<quotient<<" Remainder is "<<remainder;
}