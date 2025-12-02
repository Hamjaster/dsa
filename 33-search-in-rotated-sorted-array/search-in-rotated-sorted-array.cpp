class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0; // 2, 3, 4
        int end = nums.size() - 1;
  
        int mid = start +  (end - start) / 2; 
        cout << "MID :"<< mid;
        while ( start <= end){
            mid = (start + end) / 2; 
            if (nums[mid] == target) return mid;
            // check if numsay is right sorted or left
            if(nums[mid]  <= nums[end]){
                // check if target is present in right sorted nums
                if(nums[mid] <= target && target <= nums[end]){
                    start  = mid + 1;
                }else { // if not, then find the left numsay
                    end = mid - 1;
                }
            }else{ // vice versa of above
                if(nums[start] <= target && target <= nums[mid]){
                    end  = mid -1;
                }else {
                    start = mid + 1;
                }
            };
           
    
        }
         // check if element aint available
            if(start > end) {
                return -1;
            }else{
        return mid;
            }
 
    }
};