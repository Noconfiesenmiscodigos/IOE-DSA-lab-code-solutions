/*Write a recursive program to find Greatest Common Division GCD of two numbers.*/
#include <iostream>
using namespace std;
int gcd(int n1, int n2);
int main()
{
    int n1,n2;
    cout<<"Enter two positive integers: ";
    cin>>n1>>n2;
    cout<<"GCD of "<<n1<<" & "<<n2<<" is: "<< gcd(n1, n2);
    return 0;
}
int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}