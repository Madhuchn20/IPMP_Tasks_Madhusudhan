/* Binary Search in C++ */

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);    /*sorting the array before implementing bs*/
    int num;
    cout<<"The number to be searched: ";
    cin>>num;
    int first=0,last=n-1, mid; /*assigning the first and last indices of the array to first and last, respectively , after sorting*/
    mid=(first+last)/2;
    while(first<=last){
        if(a[mid]<num){     /* the number is greater than the middle element of the array */
            first=mid+1;    
        }
        else if(a[mid]==num){        
            cout<<endl<<"The number is present in the array";   /* the number is the middle element of the array */
            break;
        }
        else{
            last=mid-1;     /* the number is lesser than middle element of the array */
        }

        mid=(first+last)/2;
    }
    if(first>last)
        cout<<endl<<"The number does not exist in the array";

    return 0;
}
