#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
void repeat(int a[], int n){
    int sum=n*(n+1)/2,s=0;
    int prod=factorial(n),p=1;
    for(int i=0;i<n+2;i++){
        s+=a[i];
        p*=a[i];
    }
    s=s-sum;p=p/prod;
    int d=sqrt(s*s-4*p);
    cout<<(s+d)/2<<" "<<(s-d)/2;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int *a=new int[n+2];
    for(int i=0;i<n+2;i++){
        cout<<"Enter data: ";
        cin>>a[i];
    }
    sort(a,a+n+2);
    repeat(a,n);
    return 0;
}

