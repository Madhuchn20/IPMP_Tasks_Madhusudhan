/*Counting Sort*/

#include <iostream>
using namespace std;

void countingsort(int a[],int n) {
  int output[10];
  int count[10];
  int max=a[0];
  for (int i=1;i<n;i++) {
    if (a[i]>max)
      max = a[i];
  }
  for (int i=0;i<=max;i++) {
    count[i]=0;
  }
  for (int i=0;i<n;i++) {
    count[a[i]]++;
  }
  for (int i=1;i<=max;i++) {
    count[i]+=count[i - 1];
  }
  for (int i= n- 1; i >= 0; i--) {
    output[count[a[i]] - 1]=a[i];
    count[a[i]]--;
  }
  for (int i=0;i<n;i++) {
    a[i] = output[i];
  }
}

int main() {
  int a[] = {6,4,5,4,3,2,6,1,8,0};
  int n = sizeof(a) / sizeof(a[0]);
  countingsort(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}
