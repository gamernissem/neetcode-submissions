class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) {
            return 0;
        }
        
        int l = 0; int r = height.size() - 1; int vol = 0;
        int leftMax = height[l]; int rightMax = height[r];

        while ( l < r ) {
            if (leftMax < rightMax) {
                l++;
                leftMax = max(leftMax, height[l]);
                vol += leftMax - height[l];
            } else {
                r--;
                rightMax = max(rightMax, height[r]);
                vol += rightMax - height[r];
            }
        }
        return vol;
    }
};
