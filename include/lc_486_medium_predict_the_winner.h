#ifndef LC_486_MEDIUM_PREDICT_THE_WINNER_H
#define LC_486_MEDIUM_PREDICT_THE_WINNER_H
#include <iostream>
#include <limits>
#include <vector>
using namespace std;
// Enable to print vectors just by calling its name
template <typename S> ostream &operator<<(ostream &os, const vector<S> &vector) {
    for (auto element : vector)
        os << element << " ";
    return os;
}
class Solution {
  public:
    bool PredictTheWinner(vector<int> &nums);
};
#endif
