// for reverse an array

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> reverse( vector<int> v){
//   int s =0;
//   int e=v.size()-1;
//        while(s<=e){
//         swap(v[s], v[e]);
//         s++;
//         e--;
//        }
//      return v;
//     }
//     void print( vector<int> v){
//         for (int i = 0; i < v.size(); i++)
//         {
//            cout<<v[i]<<" ";
//         }
//         cout<<endl;
//     }
// int mian(){
//     vector<int> v;
//     v.push_back(4);
//     v.push_back(12);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(11);

//    vector<int> ans = reverse(v);
//    print(ans);

// }

// merge to sorted arrays

// #include <bits/stdc++.h>
// using namespace std;
// void merge(int arr1[], int n, arr2[], int m, int arr3[])
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k] = arr1[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }

//     // copy elems
//     while (i < n)
//     {
//         arr3[k] = arr1[i];
//         i++;
//         k++;
//     }
//     while (j < m)
//     {
//         arr3[k] = arr2[j];
//         k++;
//         j++;
//     }
// }
// void print(int ans[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[3] = {2, 4, 6};

//     int arr3[8] = {0};
//     merge(arr1, 5, arr2, 3, arr3);
//     print(arr3, 8) return 0;
// }


//move zeros to end
//   void moveZeroes(vector<int>& nums) {
//         int i =0;
//         for(int j =0; j<nums.size(); j++){
//             if(nums[j]!=0){
//                 swap(nums[j],nums[i]);
//                 i++;
//             }
//         }
//     }


//rotate a array
    // void rotate(vector<int>& nums, int k) {
    //     vector<int>temp(nums.size());
    //     for(int i=0; i<nums.size(); i++){
    //         temp[(i+k)%nums.size()] =nums[i];
    //     }
        
    //     nums = temp;
    // }

    //


    //check array sorted or roatated or not
    
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int cnt = 0;
//         for(int i=1;i<nums.size();i++) 
//         {
//             if(nums[i] < nums[i-1])
//                 cnt++;
//         }
//         if(nums[nums.size()-1] > nums[0])
//             cnt++;
        
//         return cnt<=1;
//     }
// };



// sum of two arrays
// vector<int> reverse(vector<int> v) {
    
//     int s = 0;
//     int e = v.size()-1;
    
//     while(s<e)
//     {
//         swap(v[s++], v[e--]);
//     }
//     return v;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    
//     int i = n-1;
//     int j = m-1;
//     vector<int> ans;
//     int carry = 0;
    
//     while(i>=0 && j>=0) {
//         int val1 = a[i];
//         int val2 = b[j];
            
//         int sum = val1 + val2 + carry;   
        
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
    
//     // first case
//     while(i>=0) {
//         int sum = a[i] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//     }
    
//      // second case
//     while(j>=0) {
//         int sum = b[j] + carry;
//         carry = sum/10;
//         int value = sum%10;
//         ans.push_back(value);
//         j--;
//     }
    
//      // second case
//     while(carry != 0) {
//         int sum = carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//     }
    
//     //print(ans);
//     return reverse(ans);
// }