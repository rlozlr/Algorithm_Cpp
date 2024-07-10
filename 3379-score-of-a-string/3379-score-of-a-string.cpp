class Solution {
public:
    int scoreOfString(string s) {
       std::vector<int> diff(s.size() - 1);

        std::transform(s.begin() + 1, s.end(), s.begin(), diff.begin(),
                       [](char first, char second) {
                           return abs(first - second);
                       });

        return std::accumulate(diff.begin(), diff.end(), 0);
    }
};