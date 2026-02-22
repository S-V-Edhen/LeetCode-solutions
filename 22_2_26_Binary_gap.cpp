#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    int binaryGap(int n) {
        //two pointer.
        string s = toBinary(n);
        int m = s.size();
        int j = -1;
        int maxgap = 0;
        for(int i = 0; i < m; i++){
            if(s[i] == '1'){
                if(j >= 0) maxgap = max(maxgap, (i - j));
                j = i;
            }
            else continue;
        }
        return maxgap;

    }
    string toBinary(int n){
        string binary = "";
        if(n == 0) return "0";
        while(n > 0){
            binary.push_back((n % 2) + '0');
            n /= 2;
        }
        reverse(binary.begin(),binary.end());
        return binary;

        
    }
};