#include <bits/stdc++.h>
using namespace std;


void reverse_array_recursive(int arr[],int start, int end){
   if(start>=end)
      return;

    int temp = arr[start];
    arr[start]= arr[end];
    arr[end]= temp;

   reverse_array_recursive(arr, start+1,end-1);
}
void reverseArray(int arr[], int start, int end){
    while(start<end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   // reverseArray(arr,0,n-1); //t(n)--O(n)
    reverse_array_recursive(arr,0,n-1); //t(n)=O(n)
    printArray(arr,n);
}

/*the above 1)t(n) -->O(n)
        2) t(n)---->O(n) */
