# include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12,33,11,5,2,4};
    //insertion sort logic ==> start from the second element and put it in the correct position in the array from the left part.
    int n = sizeof(arr) / sizeof(int);
    if(n < 2){
       cout<<arr[0];
       return 0;
    }
    for(int i = 1 ; i < n ;i++){
       int j = i-1;
       while(j >= 0 && arr[j] > arr[j+1]){
          swap(arr[j],arr[j+1]);
          j--;
       }
    }
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    return 0;
}