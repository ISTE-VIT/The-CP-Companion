> Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).

- INPUT : you are given maximum capacity W, weight array wt[], value array val[], and the number of items n as a parameter.

- OUTPUT: Output the maximum possible value you can get.

<hr>

> INPUT : N = 3
          W = 4
          values[] = {1,2,3}
          weight[] = {4,5,1}

> OUTPUT :  3

- EXPLAINATION :  
        
        We can anytime take maximum weight  = 4. So, the possibilities are taking {4} and {1} weights, so the corresponding maximum profit can be 1 or 3. So the maximum profit = 3. 
