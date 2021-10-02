**Given a ribbon of length N units. It needs to be cut into parts such that the length of each part is even and each part is atmost L units. 
How many ways are there to cut the ribbon? Two ways are different if and only if**

- **Number of cuts are different (OR)**

- **Number of cuts are same and there is some i such that the i-th part from the left is of different lengths in each of the two ways**

**If there is no way to cut it such that all parts are even, print 0.**

> INPUT : N and L

> OUTPUT : Since, the answer can be pretty large, print it modulo 10^9 + 7

<hr>


> **INPUT :** N = 6 , L =2         

> **OUTPUT :** 3


**EXPLAINATION:**
> 

> - Way 1:  2 units + 2 units + 2 units

> - Way 2:  4 units + 2 units

> - Way 3:  2 units + 4 units
