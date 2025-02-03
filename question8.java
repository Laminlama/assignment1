public class RodCutting {
    public static int maxProfit(int n, int[] prices) {
        return rodCut(n, prices);
    }

    private static int rodCut(int n, int[] prices) {
        if (n == 0) return 0; // Base case: no length left to cut

        int maxProfit = Integer.MIN_VALUE;

      
        for (int i = 0; i < n; i++) {
            if (n - (i + 1) >= 0) {
                maxProfit = Math.max(maxProfit, prices[i] + rodCut(n - (i + 1), prices));
            }
        }

        return maxProfit;
    }

    public static void main(String[] args) {
        int N = 8;
        int[] prices = {1, 5, 8, 9, 10, 17, 17, 20};

        System.out.println("Maximum Profit: " + maxProfit(N, prices)); 
    }
}
