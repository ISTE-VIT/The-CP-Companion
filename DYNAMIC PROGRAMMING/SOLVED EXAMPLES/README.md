# :computer:CODE + PICTORIAL ILLUSTRATIONS:framed_picture:

<h2> STAIRCASE PROBLEM </h2>

> In our previous stop we learned what is dynamic programming, why should you implement dynamic programming and the greatness of dynamic programming when it comes to reducing the time it takes to complete a program. In this stop in your small coding journey, we’ll take a look at three awe-inspiring famous Dynamic Programming problems, such as ‘The Staircase Problem’, ‘The House Robber Problem’ and finally ‘The Knapsack 0-1 Problem’, don’t get intimidated as you’ll learn how to elegantly solve these problems!

First, our beloved, Staircase problem.

**The statement of Staircase problem is quite simple, you see a staircase in front of you, how many ways are there to reach the final step if you can either take one step at a time or two step at a time.**

`Instead of trying to figure out the problem from the start of the step why don’t we start at the top of the staircase?`

Let’s say that you’re standing at the nth step in our staircase, what are two possible staircase step that you could’ve stood on before standing on the nth staircase? Hmm, you can only take either one step or two step at a time, then you must’ve been standing at ‘n-1’th staircase or ‘n-2’th staircase, right?

> So if there are x ways to reach the ‘n-1’th staircase and y ways to reach the staircase ‘n-2’th staircase then the total number of ways to reach the nth staircase is x + y, but what about the number of ways to reach the ‘n-1’th step? Well then that will be equal to the number of ways to reach the `n-2` th stair and the number of ways to reach the `n-2` th stair. And the same applies to the ‘n-2’th staircase. This is explained in a more vibrant way in the illustrations provided.

<hr>

![STAIR 1](https://user-images.githubusercontent.com/77975418/135498839-8341034f-db88-4ad9-8a4b-ae4b4f25aa90.jpg)

<hr>

<h3> But how to find these ways, it should end some where right ? so we can find the ways to reach the first and the second stair. And from that we can find the number of ways to reach the consequent stairs. </h3>

<hr>


![STAIR 2](https://user-images.githubusercontent.com/77975418/135498851-db79227e-7a02-4b61-b35a-2fdbfbb1bc5a.jpg)

<hr>


> All said and done, but to deeper your understanding we shall look at the recursion tree of our staircase Problem. If you take a quick look at the last complete tree, you would feel as if you had seen this peculiar tree already! And that’s true in fact this question is nothing but an innovative modification of our Fibonacci series.

<hr>


<h2> HOUSE ROBBER PROBLEM </h2>
  
Now lets look at the house robber probelm, the problem statement is very simple, There is a robber and there are some n houses. The value of wealth that can be robbed from each house is also given. But the robber cannot steal from two adjacent houses. We need to find the maximum amount of money that the robber can take from the n houses.





![IMG-20210930-WA0051](https://user-images.githubusercontent.com/77975418/135498885-3b639002-ba92-4704-98b3-2a9389e2c9d6.jpg)

<hr>


Let's say this is the sequence of houses. If we look at the naive approach, then we should first generate all the sequences of houses that the robber can steal and then find the money that the robber can take from each houses and finally we can find the maximum of all those amounts. But it is surely a time taking process and if there are too many houses the problem becomes almost impossible to attempt this way.

> So, we can try approaching this problem with the idea of dynammic programming. The most import thing in DP is to divide the main problem into subproblems. If we do this step correctly then we are half way done. Now lets break this problem into subproblems. 

`money in each house =  [ 100, 150, 30, 200, 170 ]`

- if there is no house, the robber can’t steal any money

- if there is only one house, the robber can only steal that house, **so total amount is $100**

- if there are two or more houses, the robber will try to steal the maximum amount of money without stealing from the two adjacent houses 

> when there are 2 houses, the robber will compare the amount he can steal from the first house and the second house. Here the seond house has the maximum amount so he steals from the second house. **So the total amount now is $150.**

> On the third house, the robber will think about whether it’s better to steal only from 2nd house or 1st  house + 3rd house. Still second house has the maximum amount so, he has only **$150** till the second house.  Before proceeding to the next house we will make an array, where the ith element has maximum amount that can be collected till the ith house.

`arr = [ 100 , 150, 150 ]`

> Now if we take the 4th house, we will decide either to take the maximum about that can be collected till house 2 + money in house 4 or the maximum money that can be collected till house 3. As **150 + 400 > 150**, he can confidently take from the 4th house. Proceeding this way, we can find the total money that can be collected till the nth house.

<hr> 

![IMG-20210930-WA0052](https://user-images.githubusercontent.com/77975418/135498891-63781f70-b415-45bc-a97a-19654d0e76ec.jpg)


![IMG-20210930-WA0053](https://user-images.githubusercontent.com/77975418/135498892-6bb3ad9d-ca9a-44df-bb77-c865b1704772.jpg)


<hr>

<h1><p align="center"> HAPPY CODING :man_technologist:	</p></h1>

