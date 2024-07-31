#include <iostream>
#include <vector>

using namespace std;

namespace MajorityElementNamespace {
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }

            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
}

int main() {
    using namespace MajorityElementNamespace;

    vector<int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int result = majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}

