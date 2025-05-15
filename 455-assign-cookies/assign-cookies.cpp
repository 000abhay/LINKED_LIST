class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0,n=s.size(),m=g.size(),i=0,j=0;
        for(i;i<n&&j<m;i++)
        {
            if(s[i]>=g[j])
            {
                count++;
                j++;
                
                
            }
          
        }
        return count;
    }
};