> You are in an library. But you are too tired to go to each floor by stairs. 
> So you are getting the help of a lift. The lift at each floor has different fee to pay. 


> This is represented by an array fee[], where fee[i] indicates the amount of fee we need to pay in that floor. 
> Once you pay the cost, you can either climb one or two floors. You can either start from the floor with index 0 or  1.

- INPUT : An array that has the fee for each floor [ 0th floor, 1st floor, 2nd floor, ... ]

- OUTPUT: Minimum cost to reach the top floor

<hr>


> INPUT : [7,19,8,1]                     

> OUTPUT :  15

- EXPLAINATION :  
              
              1) We can start from the 0th floor and pay 7 rupees to go to the 2nd floor.
              
              2) From the second floor we can pay 8 rupees to reach the 3rd floor.
              
              3) Any other combination will give a value more than 15
              
<hr>

> INPUT : [17,13,2,32,12,8]         

> OUTPUT :  27

- EXPLAINATION :  
              
              1) We can start from the 1st floor and pay 13 rupees to go to the 2nd floor.
              
              2) From the second floor we can pay 2 rupees to reach the 4th floor.
              
              3) From the 4th floor we can pay 12 rupees to reach the top floor.
              
              4) Any other combination will give a value more than 27
