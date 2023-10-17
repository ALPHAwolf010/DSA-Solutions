class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int repeat=-1;
        vector<int>v(300,-1);

         int i=0;
          int max_val=-1;
          if(s.empty())
            return 0;
         while(i<s.size())
          {
             if(v[s[i]]>repeat)
              {
                
                repeat=v[s[i]];
              }
               v[s[i]]=i;
              max_val=max(max_val,i-repeat);
              i++;
          }
       return max_val;
    }
};