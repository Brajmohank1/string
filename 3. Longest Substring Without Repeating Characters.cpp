/*
Given a string s, find the length of the longest substring without repeating characters.


Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> mp;
        
        int i = 0 , j = 0 ,n= s.size();
        int ans = 0;
        
        for(i = 0 ; i < n ; i++){
            
            if(mp.find(s[i]) != mp.end())
                j =max(mp[s[i]]+1,j);
            
            mp[s[i]] = i;
            
            ans = max(ans , i - j +1);
        }
        return ans;
    }
