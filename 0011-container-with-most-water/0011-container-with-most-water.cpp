class Solution {
public:
    int maxArea(vector<int>& height) {
        int top1 = 0, top2 = height.size()-1;
        int max = 0;
        while(top2 > top1){
            int temp = min(height[top1], height[top2]) * (top2-top1);
            if(temp > max) max = temp;
            height[top1] > height[top2] ? top2-- : top1++;
        }
        return max; 
    }
};