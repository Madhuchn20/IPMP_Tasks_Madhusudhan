/*Does not work if the array has duplicate values*/

#include<iostream>
using namespace std;
int pivot(int a[],int n){
    int l=0,h=n-1;
    while(l<=h){
        if(a[l]<=a[h]){
            return l;
        }
        int mid=l+(h-l)/2;
        int prev=(mid-1+n)%n;
        int next=(mid+1)%n;
        if(a[mid]<=a[prev] && a[mid]<=a[next]){
            return mid;
        }
        else if(a[mid]>=a[l]){
            l=mid+1;
        }
        else if(a[mid]<=a[h]){
            h=mid-1;
        }
    }
    return -1;
}
int binarysearch(int a[],int n, int l, int h, int key){
    while(l<=h){
        int m=l+(h-l)/2;
        if(a[m]==key){
            return m;
        }
        else if(a[m]>key){
            h=m-1;
        }
        else {
            l=m+1;
        }
    }
    return -1;
}
int main(){
    int a[]={7,1,2,3,5};
    int n= sizeof(a)/sizeof(a[0]);
    int p=pivot(a,n);
    cout<<"Pivot: "<<p<<endl;
    int key;
    cout<<"Enter key: ";
    cin>>key;
    if(key>=a[0]&&key<=a[p-1]){
        cout<<binarysearch(a,n,0,p-1,key);
    }
    else{
        cout<<binarysearch(a,n,p,n-1,key);
    }
    return 0;
}


