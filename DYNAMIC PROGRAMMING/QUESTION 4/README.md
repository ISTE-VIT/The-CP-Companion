**N children are playing in a park.**

**You are a social activist and you have planned to make the students plant some trees.
There are m packets of seeds represented by the array seeds[], where seeds[i] represents the number of seeds in the ith packet.** 

**Knowing the fact that there are N students, he need to take some packets from the available packets, 
so that he can distribute the seeds to all the children such that each children gets equal amount of seeds.**

<hr>

**NOTE:**   

**1)** He can either take a packet or not take it. He can't take some amount of seeds from a packet.
               
               
**2)** Each packet has unique number of seeds, i.e) No two packets have equal number of seeds
 
 <hr>
 
**INPUT :**

**1)** Number of students N, Number of packets M

               
               
**2)** An array that has the seed in m packets **[ 1st packet, 2nd packet, ...  ]**


**OUTPUT:** YES or NO
              
**YES** if there is a possibility to take the packets so that each children get equal amount, 

**NO** if there is no such possibility

<hr>



> **INPUT :** N = 5, M = 4, seeds = [1,8,2,7]                     

> **OUTPUT :**  YES

**EXPLAINATION :**  
              
1) If we take the packets seeds[1] and seeds[2] we get, 8+2 = 10 seeds. We can distribute to all students and each gets 2 seeds.   
            
2) If we take the packets seeds[0], seeds[3] and seeds[2] we get 1 + 2 + 7 = 10 seeds. We can distribute to all students and each gets 2 seeds.   
              
3) If we take the packets seeds[2] and seeds[3]  we get 8 + 7 = 15 seeds. We can distribute to all students and each gets 3 seeds. 


**Since there are more than 1 possibilities in which we can distribute the seeds to 5 students, we print YES**

<hr>


> **INPUT :** N=8, M=2, [1,9]          

> **OUTPUT :**  NO


**EXPLAINATION :**  
              
**Since there are no possibilities in which we can distribute the seeds to 8 students, we print NO**
>
