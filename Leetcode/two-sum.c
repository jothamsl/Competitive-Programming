#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target) {
  for (int i = 0; i < numsSize; i++) {
    for (int k = numsSize; k > 0; k--) {
      if (&nums[i] + nums[k-1] == target)
      {
        static int res[2] = {i, k-1};
        return res;
      }
    }
  }
}

int main(int argc, char **argv) {
  int nums[] = {3, 2, 4};
  int x = twoSum(nums, sizeof(nums) / sizeof(int), 6);
}
