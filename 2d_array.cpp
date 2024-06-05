// #include<bits/stdc++.h>
// using namespace std;

// int binarysearch(int arr[][4], int elem, int i, int j){
//   for(int i =0; i<3; i++){
//     for (int j = 0; j < 4; j++)
//     {
//       if(arr[i][j]==elem){
//         return true;
//       }
//     }
//   }
// return false;
// }
// int main(){

//     // int arr[3][4];
    
//     // int arr[3][4] = {1,2,4,5,6,7,8,9,8,7,5,21};
    
//     int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
// int elem ;
// cout<<"enter your value";
// cin>>elem;
// cout<<endl;
//     //taking input row wise
//     // for (int row = 0; row<3 ; row++)
//     // {
//     //     for (int col = 0; col < 4; col++)
//     //     {
//     //         cin>>arr[row][col];
//     //     }*
        
//     // }

//      //taking input col wise
//     // for (int col = 0; col<4 ; col++)
//     // {
//     //     for (int row = 0; row < 3; row++)
//     //     {
//     //         cin>>arr[row][col];
//     //     }
        
//     // }


//     //for print the array
//    int ans = binarysearch(arr,elem,3,4);
//    cout<<ans<<" ";
// return 0;

// }


// #include<bits/stdc++.h>
// using namespace std;
// int printsum(int arr[][4], int i, int j){
//     int sum =0;
//     for (int i = 0; i < 3; i++)
//     {
// for (int j = 0; j< 4; j++)
// {
//   sum += arr[i][j];
// }

//     }
//     return sum;


//print sum row wise
//     void printsum(int arr[][4], int i, int j){
//     for (int i = 0; i < 3; i++)
//     {
//          int sum =0;
// for (int j = 0; j< 4; j++)
// {
//   sum += arr[i][j];
// }
//     cout<< sum;
//     }

//printsum col wise
//     void printsum(int arr[][4], int i, int j){
//     for (int j = 0; j < 4; j++)
//     {
//          int sum =0;
// for (int i = 0; i< 3; i++)
// {
//   sum += arr[i][j];
// }
//     cout<< sum;
//     }
    
// }

// void printarray(int arr[][4]){
//   for (int i = 0; i <3; i++)
//   {
//     for (int j = 0; j < 4; j++)
//     {
//       cout<<arr[i][j]<<" ";
//     }
    
//   }
  
// }
// int main(){
// int arr[3][4] = {1,2,4,5,8,5,6,7,9,4,4,5};
// printarray(arr);
//int ans = printsum(arr,3,4);
//cout<<ans;
//  printsum(arr,3,4);
//  
// return 0;
// }




//largest row sum
// #include<bits/stdc++.h>
// using namespace std;
// void printarray(int arr[][4], int i , int j){
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j= 0; j< 4; j++)
//     {
//       cout<<arr[i][j]<<" ";
//     }
    
//   }
  
// }
// int largestrow(int arr[][4],int i, int j){
//   int maxi = INT_MIN;
//   int index = -1;
//   for (int i = 0; i < 3; i++)
//     {
//          int sum =0;
// for (int j = 0; j< 4; j++)
// {
//   sum += arr[i][j];
// }
//     if(sum>maxi){
//       maxi = sum;
//       index = i;
//     }
//     }
//     cout<<"the maximum sum is"<<maxi<<endl;
//     return index;
// }
// int main(){
//   int arr[3][4] ={2,5,4,7,8,9,6,3,5,7,9,5};
//   printarray(arr,3,4);
//   int ans = largestrow(arr,3,4);
//   cout<<ans;
//   return 0;
// }



//print like a wave
// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vetcor<int>ans;
//    for(int col =0; col<mCols; col++){
//        if(col&1){
//            //odd --> bottom to top
//            for(int rows = nRows-1; row>=0; row--){
//                ans.push_back(arr[row][col]);
//            }
//        }
//        else{
//            //even -->top to bottom
//            for (int row =0; row<nRows; row++){
//                    ans.push_back(arr[row][col]);
//            }
//        }
//    }
//     return ans;
// }