#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity = O(min(a,b))
Space Complexity = O(min(a,b))
*/
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<"GCD = "<<gcd(num1,num2)<<endl;
}