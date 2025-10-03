// 55. Jump Game
bool canJump(int *nums, int numsSize) {
  int range = 0, max_range = 0;
  for (int i = 0; i < numsSize; i++) {
    range = i + nums[i];
    if (i > max_range) {
      break;
    }
    if (range > max_range) {
      max_range = range;
    }
  }
  if (max_range >= numsSize - 1) {
    return true;
  }
  return false;
}
