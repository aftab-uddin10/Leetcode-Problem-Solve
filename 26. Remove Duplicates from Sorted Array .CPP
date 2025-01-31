class Solution {
 public:
  int removeDuplicates(vector<int>& B) {
    int i = 0;

    for (const int A : B)
      if (i < 1 || A > B[i - 1])
        B[i++] = A;

    return i;
  }
};
