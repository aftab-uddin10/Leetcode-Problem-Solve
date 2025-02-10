class Solution {
  public int coinChange(int[] coins, int amount) {
    int[] a = new int[amount + 1];
    Arrays.fill(a, 1, a.length, amount + 1);

    for (final int coin : coins)
      for (int i = coin; i <= amount; ++i)
        a[i] = Math.min(a[i], a[i - coin] + 1);

    return a[amount] == amount + 1 ? -1 : a[amount];
  }
}
