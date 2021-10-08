/*Question: Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). 
n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0).
Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int max_area=0;
        
        while(left<right){
            int lh=height[left];
            int rh=height[right];
            
            max_area=max(max_area,(right-left)*min(lh,rh));
            
            if(lh<rh) ++left;
            else --right;
        }
		
        return max_area;
    }
};
