#include<iostream>
using namespace std;
int occurence(int a[], int l, int h, int key, bool x){
    int result=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]==key){
            result=mid;
            if(x==true){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else if(a[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter number: ";
    cin>>key;
    cout<<"The number occurs "<<occurence(a,0,n-1,key,false)-occurence(a,0,n-1,key,true)+1<<" times in the array."<<endl ;
    return 0;
}
