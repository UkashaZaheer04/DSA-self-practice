#include <iostream>
using namespace std;
int n = 5;
int arr[5] = {4, 7, 2, 9, 5};
void merge(int l, int m, int r)
{
  int n1 = m - l + 1;
  int n2 = r - m;
  int arr1[n1], arr2[n2];
  for (int i = 0; i < n1; i++)
  {
  }
}
void mergesort(int l, int r)
{
  if (l < r)
  {
    int mid = (l + r) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    merge(l, mid, r);
  }
}