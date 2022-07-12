#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

vector<int> alg(vector<int> nums1, int m, vector<int> nums2, int n) {
    for (int i = 0; i < n; i++) {
        if (nums1[m] == 0 && m >= 1) {
            nums1.erase(nums1.begin() + m);
        }
        else if (nums1[m] == 0 && m < 1) {
            nums1.clear();
        }

        nums1.push_back(nums2[i]);
    }

    sort(nums1.begin(), nums1.end());
    m = m + n;
    n = 0;

    return nums1;
}

int main()
{
    vector<int> nums = { 1, 2, 3, 0, 0, 0 };
    int m = 3;
    vector<int> nums2 = { 2, 5, 6 };
    int n = 3;

    vector<int> ans = alg(nums, m, nums2, n);

    cout << "Original array: \n";

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    cout << "Merged with: \n";

    for (int i = 0; i < nums2.size(); i++) {
        cout << nums2[i] << " ";
    }

    cout << endl;

    cout << "Merged and sorted array: \n";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
