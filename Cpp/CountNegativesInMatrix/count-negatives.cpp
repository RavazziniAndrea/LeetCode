#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid)   {
        int res=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]<0)
                {
                    res++;
                }
            }
        }
        return res;
    }
};

int main(){
	Solution s;
	vector<vector<int>> mat = {{1,2,3},{1,-2,-3},{1,-2,-4}};
	cout << s.countNegatives(mat) <<endl;	
	return 0;
}
