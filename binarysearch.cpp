class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int pos=-1;
        for(int i=0;i<m;i++)
        {
            if(target>=matrix[i][0] && target<=matrix[i][n-1])
            {
                pos=i;
                break;
            }
        }
        
        if(pos==-1)
            return false;
        
        int l=0,h=n-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(matrix[pos][mid]==target)
                return true;
            else if(matrix[pos][mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return false;
    }
};
