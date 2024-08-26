#include<vector>
#include<cmath>
#include<algorithm>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int A  = word1.size();
         int B = word2.size();
        int a = 0;
        int b=0;
        vector<char> s;
        int word=1;
        while(a < A && b < B){
            if(word==1){
                s.push_back(word1[a]);
                a+=1;
                word=2;
            }
            else if(word ==2){
                s.push_back(word2[b]);
                b+=1;
                word=1;
            }
        }
        while(a<A){
            s.push_back(word1[a]);
            a+=1;
        }
        while(b<B){
            s.push_back(word2[b]);
            b+=1;
        }
        string str(s.begin(),s.end());
        return str;
    }
};