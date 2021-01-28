class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m - 1; i >= 0; i--){
            nums1[i + n] = nums1[i];
        }
        int k = 0;
        int i = n, j = 0;
        while(i < m + n && j < n){
            if(nums1[i] < nums2[j]) nums1[k++] = nums1[i++];
            else    nums1[k++] = nums2[j++];
        }
        if(i == m + n){
            for(; j < n; j++){
                nums1[k++] = nums2[j];
            }
        }else{
            for(; i < m + n; i++){
                nums1[k++] = nums1[i];
            }
        }
    }
};