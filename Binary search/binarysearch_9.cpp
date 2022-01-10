/*merge 2 sorted arrays */

#include <iostream>
using namespace std;

void moveToEnd(int a[], int m){
   int j = m-1;
   for (int i =m-1;i>=0;i--)
     if (a[i]!=-1){
        a[j] =a[i];
        j--;
     }
}

int merge(int a[],int b[], int m, int n){
   int i = n;
   int j = 0;
   int k = 0;
   while(k<(m+n)){
    if ((j==n)||(i<(m + n) && a[i]<=b[j])){
        a[k]=a[i];
        k++;
        i++;
    }
    else {
       a[k]=b[j];
       k++;
       j++;
    }
   }
}

int main(){
   int a[] = {4,6,-1,-1,-1,11,-1,12,18};
   int b[] = {2,12,15,27};
   int n=sizeof(b)/sizeof(b[0]);
   int m=sizeof(a)/sizeof(a[0])-n;
   moveToEnd(a,m+n);
   merge(a,b,m,n);
   for(int i=0;i<m+n;i++){
        cout<<a[i]<<" ";
   }
   return 0;
}
