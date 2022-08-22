#include <iostream>
#include <map>

using namespace std;

int romanToInt(string s);

int strStr(string haystack, string needle);

int main(){
    string s = "XVIII";

    romanToInt(s);

    string subs = s.substr(1,1);
    cout << subs;

    return 0;
}

int strStr(string haystack, string needle) {
        
        if(needle.empty())
            return 0;
        
        for(int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[0]){
                if (needle == haystack.substr(i, needle.length()))
                    return i;
            }
        }
        return -1;
}

int romanToInt(string s) {
        map<char, int> nums = {
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1}
        };
        int value = 0;
        int prev = 0;

        for(auto c: s){
            if(prev == 0 || nums.at(c) <= prev){
                value += nums.at(c);
                prev = nums.at(c);
            }else{
                value += nums.at(c) - prev*2;
                prev = nums.at(c);
            }
        }
        
        return value;
    }