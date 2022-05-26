/*
Given a string S on which you need to perform Q replace operations.
Each replacement operation has 3 parameters: a starting index i, a source word x and a target word y. The rule is that if x starts at position i in the original string S, then we will replace that occurrence of x with y. If not, we do nothing.
Note: All these operations occur simultaneously. It's guaranteed that there won't be any overlap in replacement: for example, S = "abc", indexes = [0,1], sources = ["ab", "bc"] is not a valid test case.


Example 1:

Input: 
S = "gforks"
Q = 2
index[] = {0, 4}
sources[] = {"g", "ks"}
targets[] = {"geeks", "geeks"}
Output: 
geeksforgeeks
Explanation:
"g" starts at index 0, so, it's reaplaced by
"geeks". Similarly, "ks" starts at index 4,
and is replaced by "geeks".
Example 2:

Input: 
S = "gforks"
Q = 2
index[] = {0, 3}
sources[] = {"g", "ss"}
targets[] = {"geeks", "geeks"}
Output: 
geeksforks
Explanation:
"g" starts at index 0, so, it's reaplaced by
"geeks". "ss" doesn't start at index 3 in
original S, so it's not replaced.

Your Task:
You don't need to read input or print anything. You only need to complete the function findAndReplace() that takes a string S, an integer Q, and 3 arrays index, sources, and targets of size Q, as input and returns the new string after all the operations. index[i], sources[i], and targets[i] denotes the index, sources, and targets for ith query.


Expected Time Complexity:  O(|S| * Q)
Expected Auxilliary Space: O(Q)
 

*/

class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        // code here
         int increment =0;

for(int i=0;i<Q;i++){
  int length=sources[i].length();
  if(S.substr(index[i]+increment,length)==sources[i]){
      S.replace(index[i]+increment,length,targets[i]);
   increment+=targets[i].length()-sources[i].length();
          }
      }
          
      return S;
    }
};















