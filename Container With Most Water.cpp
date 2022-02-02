class Solution {
public:
    int maxArea(vector<int>& height){
        int n = height.size();
        int low = 0, high = n-1;
        int res = 0;
        while(low < high){
            int left = height[low], right = height[high];
            
            int curr = min(left,right) * (high - low);
            
            res = max(res,curr);
            
            if(left > right) 
                high--;
            else low++;
        }
        return res;
    }
};
