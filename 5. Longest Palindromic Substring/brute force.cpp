// O(n^3) speed
// goes through the array one by one, dividing every possible substring
// then checking if each substring is the longest palindrome

#include <string>
#include <iostream>
using namespace std;

class Solution {
bool ifPalindrome (string input) {
  int length = input.length();
  if (length == 1)
    return true;

  for (int i = 0; i < length/2; i++)
    if (input[i] != input[length - (i+1)])
      return false;

  return true;
}

public:
    string longestPalindrome(string s) {
      string longest = "";
      int longestLength = 0;
      for(int i=0;i<s.length();i++){
        for(int j=s.length()-1;j>=i;j--){
          string tmp = s.substr(i,j-i+1);
          if (j-i+1 > longestLength && ifPalindrome(tmp)) {
            longestLength = j-i+3;
            longest = tmp;
          }
        }
      }
      return longest;
    }
};

int main(){
  cout << Solution().longestPalindrome("haha");
}
