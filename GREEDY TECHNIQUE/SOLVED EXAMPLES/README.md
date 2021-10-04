<h1> :computer:CODE + PICTORIAL ILLUSTRATIONS:framed_picture:: </h1>

<h2> 1. ACTIVITY SELECTOR: </h2>

- Let's say you are in a excursion, and there are many events that take place. You are given with the schedule ( start time and end time) of each events. But you see that some of the event overlap with each other. You like all the events equally, so you want to attend as many event as possible. How will you device an algorithm for this ?

- This is infact the problem statement of the **Activity selector probelm**. We are given with the start and end time of some overlapping events, and we are asked to find the maximum number of events that we can attend without overlapping. Here is a simple illustration to explain things more clearly.

<hr>

![image](https://user-images.githubusercontent.com/77975418/135709985-2a4187fd-a1ae-4aa9-b831-f81e61c47e4c.png)

<hr>

> These are some events that happen. If you notice clearly, the timings of music, dance and bike stunt overlaps. 

> The First thing that we can do is arranging the events in the increasing order of their finishing time. Because only if a event finishes you can think about attending next event. So sorting the event based on the endding time does makes sense because if an event finishes early, we can go for the next events.

> In order to go to the next event, the starting time of the next event should be greater than or equal to the ending time of the previous event, otherwise the events will overlap.

<hr>

![image](https://user-images.githubusercontent.com/77975418/135709988-7e3d4d38-693a-4c14-b20c-58ca1737c353.png)

<hr>

We can't attend the Dance event because the start time is greater than the previous event music that we are attending. But we can attend the Stunt event because, the previous event that we are attending is Music and the end time of it is less than the start time of the stunt.

<hr>


<h2> 2. HUFFMAN CODING </h2>

- We all know that DNA is a sequence of 'A' , 'G' , 'T' and 'C'. Any DNA that we take can be represented by a sequence of these characters. After representing this, it is required to encrypt or decrypt it to extract information from it. But you may think that there is already a ASCII coding scheme that is used to code and decode all the characters in the keyboard, but there is an issue.

- The ASCII code contains all the alphabets, numbers and speacial characters that are in the keyboard. So each character is represented by a number between 0 and 127, which is a 8 bit data. But isn't 8 bits too much for using the same code for DNA sequences too?

- Because, DNA sequences has only 4 characters in it, so it is not required to use the coding scheme that is used for 128 chracters (ASCII). So for coding these custom character sequences, we use an algorithm called **Huffman's coding algorithm**

Lets take an example: Let **AGGACTAAAAACG** be the given sequence and we are asked to find an efficient coding scheme for this sequence. Lets analyse the frequencies of the characters,


> A → 7

> G → 3

> C → 2

> T → 1

<hr>


Our Huffman tree would look something like this,


![image](https://user-images.githubusercontent.com/77975418/135710106-83003fbb-2353-4a66-9252-c806c4c0eef8.png)

<hr>


> Don’t worry if you don’t know how this tree was made, we’ll come to that in a bit. But for now, let’s look at how much we can compress this string looking at the new representations. The code of a character is represented by the branches that it need to pass to reach the node. A left branch corresponds to the bit 0 and the right branch corresponds to the bit 1.

Normally we would represent ‘A’ ‘G’, ‘T’ and ‘C’ with 8 bits each. But now the new representations are -

> A: 0 (1 bit)

> G: 10 (2 bits)

> C: 110 (3 bits)

> T : 111 (3 bits)

```
So something like ‘ACT’ would be represented as **0110111.**

You can see here that we represented ‘ACT’ in only 7 bits instead of the usual 24 bits it would need. 

Similarly, our original string compressed would be -

Size = 7*(1 bit) + 3*(2 bit) + 2*(3 bit) + 1*(3 bit) = **22 bits!**

That’s a good reduction from our usual (7+3+2+1)*8 = **104 bits.**

```

I hope this gave you a quick insight into how Huffman compression works. Next, let’s see how we build a Huffman Tree.

<hr>


# **Building Huffman Trees**

- The first and most fundamental step of building a Huffman tree is calculating the occurrences of each character. Since we’ll be using Python, a dictionary data structure would be the easiest way to do this.

- Now suppose this is the current, character occurrence chart. What we want to do is start by grouping the two least occurring nodes (characters) and join them. This will be considered a new node with an occurrence value being the sum of the values of both the nodes, i.e. the total occurrences of both these characters.

- Now we take the next two lowest value nodes and join them too. Once we join two nodes, we start considering them as one combined unit node.

- We repeat this step until there is only one node in total. This node is our Huffman tree. Now, to find the new representation of each character, we add a 0 for each left and 1 for each right edge.

<hr>

![IMG-20211003-WA0049](https://user-images.githubusercontent.com/77975418/135810022-23b1ad95-d826-4770-b29e-d9e3c3197282.jpg)


<hr>

> The code for it is a bit complex, it is okay if you are not very confortable with the heap data structure, the idea of how to solve this is more important that the code!

<hr>

<h1><p align="center"> HAPPY CODING :man_technologist:	</p></h1>
