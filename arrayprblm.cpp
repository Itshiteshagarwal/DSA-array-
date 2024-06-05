//swap alternate
// #include<bits/stdc++.h>
// using namespace std;
// void printarray(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void swapalternate(int arr[], int size){
// for (int i = 0; i < size; i+=2)
// {
//     if(i+1<size){
//         swap(arr[i], arr[i+1]);
//     }
// }

// }
// int main(){
// int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
// int brr[5] = {9, 5, 7, 8, 6};

// swapalternate(arr, 8);
// printarray(arr, 8);

// swapalternate(brr, 5);
// printarray(brr, 5);
//     return 0;
// }



//pair sum
// #include <bits/stdc++.h> 
// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    vector<vector<int>ans;
//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i]+arr[j]==s){
//                 vector<int>temp;
//                 temp.push_back(min(arr[i],arr[j]));
//                  temp.push_back(max(arr[i],arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }

//triplate with given sum
#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void sortone(int arr[], int n){
    int i =0;
    int j = n-1;
    while (i<j)
    {
       while (arr[i]=0 && i<j)
       {
        i++;
       }
       while (arr[j]==1 && i<j)
       {
       j--;
       }
       if(i<j){
     swap(arr[i], arr[j]);
     i++;
     j--;
       }
    }
    
}
int main(){
     int arr[8] = {0, 1, 0, 1, 1, 0, 1, 0};
  sortone(arr, 8);
  printarray(arr, 8);
    return 0;
}