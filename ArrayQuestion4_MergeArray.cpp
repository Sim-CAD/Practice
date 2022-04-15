 #include<bits/c++.h>
#include<vector>
using namespace std;

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int p1 = m - 1; //points to the last index of array nums1
      int p2 = n - 1; //points to the last index of array nums2
        
     if(m == 0 && n == 1){
         nums1[0] = nums2[0];
     }
         
       
       for(int i = n + m - 1; i >=0 ; i--){
         
           
           if(p1 >=0 && p2 >= 0 && nums1[p1] <= nums2[p2]){
               nums1[i] = nums2[p2--];
           }
               
           else if( p1 >=0 && p2 >= 0 && nums1[p1] >= nums2[p2]){
               nums1[i] = nums1[p1--];
            }
           
            else if( p1 < 0){
                nums1[i] = nums2[p2--];
            }
         
       }  
    }