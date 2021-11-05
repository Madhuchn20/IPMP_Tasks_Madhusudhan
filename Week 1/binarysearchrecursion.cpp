/*Binary Search using recursion*/

#include<iostream>
#include<algorithm>
using namespace std;
int binarysearch(int a[], int l, int r, int key){       //function
    if(l>r){
        return -1;
    }
    int m=l+(r-l)/2;
    if(a[m]==key){
        return m;
    }
    else if(a[m]>key){
        binarysearch(a,l,m-1,key);      //recursive function
    }
    else{
        binarysearch(a,m+1,r,key);
    }
}
int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int *a=new int[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    sort(a,a+size);     //sorting array before binary search
    int key;
    cout<<"Enter number: ";
    cin>>key;
    cout<<"Index : "<<binarysearch(a,0,size-1,key);
    return 0;
}


