#include <iostream>
using namespace std;

int min(int x, int y) {
    if(x<y)
        return x;
    else
        return y;
}

void merge(int a[], int l, int m, int r){
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int left[n1], right[n2];
    for (i = 0; i < n1; i++){
        left[i] = a[l + i];
    }
    for (j = 0; j < n2; j++){
        right[j] = a[m + 1+ j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (left[i] <= right[j]){
            a[k] = left[i];
            i++;
        }
        else{
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2){
        a[k] = right[j];
        j++;
        k++;
    }
}

void mergesort(int a[], int n){
   int current;
   int left;
   for (current=1; current<=n-1; current = 2*current){
       for (left=0; left<n-1; left += 2*current){
           int mid = min(left+current-1,n-1);
           int right = min(left+2*current-1,n-1);

           merge(a,left,mid,right);
       }
   }
}

int main(){
    int a[] = {8,3,4,1,7,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    mergesort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
