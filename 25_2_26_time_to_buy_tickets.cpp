#include <vector>
using namespace std;
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        // everyone before and at k can buy tickets[k] tickets, and after that -1 of that.
        int n = tickets.size();
        int time = 0;
        for(int i = 0; i < n; i++){
            if(i <= k) time += min(tickets[i], tickets[k]);
            else time += min(tickets[i], tickets[k] - 1);
        }
        return time;
    }
};