
**You are given an sequence of integers.** 

**You are asked to split this array into 2 sub sequences such that the total number of elements in both the array is equal to the size of the original array.** 

**You are asked to find the maximum value obtained when we add the mean of the subarrays that we have formed.**
       
> Mean of an array is, arr[] = {1,5,6} → mean = (1 + 5 + 6)/3 = 4.00


<hr>

> NOTE:
  
        
- the array elements can be positive, negative or zero,
        
- BRUTE FORCE solutions are not accepted


<hr>



> **INPUT :**  [3, 1, 2]

> **OUTPUT :** 4.5

- **EXPLAINATION:**
        
        𝑎=[3], b=[1,2] sum of means ⇒ 3 + 1.5 =  4.5
        
        𝑎=[3, 1], b=[2] sum of means ⇒ 2 + 2 = 4
        
        𝑎=[1], b=[3,2] sum of means ⇒ 1 + 2.5 = 3.5
> 

**The maximum value from all these is 4.5**
