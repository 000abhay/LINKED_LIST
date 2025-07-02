class Solution {
public:
    int possibleStringCount(string word) {
        int p1,p2,count=0;
        p1=0,p2=1;
        int l=word.length();
        while(p2<l)
        {
           if(word[p1]==word[p2])
           {
            count++;
            p2++;
           }
           else
           {
            p1=p2;
            p2++;
           }

        }
      return count+1;
    }
};