#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    if(num==0)
        return 1;    

    while(num!=1)
    {
        fact*=num;
        num--;
    }
    return fact;
}
// int neg_factorial(int num)
// {
//     int fact=1;
//     while(num!=0)
//     {
//         fact*=num;
//         num++;
//     }
//     return fact;
// }
int main()
{
    int num;
    cout<<"Enter number = ";
    cin>>num;

    cout<<factorial(num)<<endl;
}
