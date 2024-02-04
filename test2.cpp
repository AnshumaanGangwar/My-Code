#include<iostream>
using namespace std;
#include<algorithm>
#include<cmath>

int partition(int arr[], int l, int r){
  //counting the correct index for first element
  int count = 0;
  for(int i = l + 1; i <= r; i++){
    if(arr[i] < arr[l]){
      count++;
    }
  }
  //put the first element to right place
  int c = l + count;
  swap(arr[l], arr[c]);
  //putting smaller elemnt to left side and larger element to right side of pivot element
  int i = l, j = c + 1;
  while(i <= c-1 && j <= r){
    if(arr[i] < arr[c]){
      i++;
    }else if(arr[j] >= arr[c]){
      j++;
    }else{
      swap(arr[i], arr[j]);
      i++;
      j++;
    }
  }
  return c;
}

void qs(int arr[], int l, int r){
  if(l >= r){
    return;
  }
  int c = partition(arr,l,r);
  qs(arr,l,c-1);
  qs(arr,c+1,r);
}

