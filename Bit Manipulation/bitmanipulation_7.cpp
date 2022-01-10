/*Turn off rightmost set bit*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Output is: "<<(n&(n-1))<<endl;
    return 0;
}
