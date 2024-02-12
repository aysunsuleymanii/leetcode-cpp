//
// Created by Aysun Suleymanturk on 12.2.24.
//
#include <iostream>
using namespace std;

class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[counter] = nums[i];
                counter++;
            }
        }
        return counter;
    }
};