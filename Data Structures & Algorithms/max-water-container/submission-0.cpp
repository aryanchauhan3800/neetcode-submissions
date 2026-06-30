class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int left =0;
        int right = n-1;
        int maxarea =0;

        while(left < right){
            int w = right - left ;

            int h = min(heights[left],heights[right]);

            int area = w*h;

            maxarea = max(maxarea , area);

            if(heights[left]< heights[right]){
                left++;

            }else{
                right--;

            }
        }

        return maxarea;

        
    }
};
