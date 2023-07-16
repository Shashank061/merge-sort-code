# include <bits/stdc++.h>
using namespace std;
void Merge(int arr[], int l, int mid,int r){
    int sz1 = mid-l+1;
    int sz2 = r-mid;
    int arr1[sz1];
    int arr2[sz2];
    for(int i = 0 ;i < sz1;i++){
        arr1[i] = arr[l+i];
    }
    for(int i = 0 ;i < sz2;i++){
        arr2[i] = arr[mid+1+i];
    }
    int idx = r;
    sz1--;sz2--;
    while(sz1 >= 0 && sz2 >= 0){
        if(arr1[sz1] > arr2[sz2]){
            arr[idx] = arr1[sz1];
            sz1--;
        }
        else{
            arr[idx] = arr2[sz2];
            sz2--;
        }
        idx--;
    }
    while(sz1 >= 0){
        arr[idx] = arr1[sz1];
        sz1--;idx--;
    }
    while(sz2 >= 0){
        arr[idx] = arr2[sz2];
        sz2--;idx--;
    }
    return ;
}
void MergeSort(int arr[], int l, int r){
    if(l < r)
    {
        int mid = (l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
    return ;
}
int main()
{
    int arr[] = {12,45,23,51,19,8};
    //Merge sort
    int n = sizeof(arr)/sizeof(int);
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}