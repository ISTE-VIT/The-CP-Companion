<h2> Bin packing Algorithm</h2>

The bin packing problem is a special type of cutting stock problem. In the bin packing problem, objects of different volumes must be packed into a finite number of containers or bins each of volume V in a way that minimizes the number of bins used. In computational complexity theory, it is a combinational NP-hard problem.

When the number of bins is restricted to 1 and each item is characterized by both a volume and a value, the problem of maximizing the value of items that can fit in the bin is known as the knapsack problem.

A variant of bin packing that occurs in practice is when items can share space when packed into a bin. Specifically, a set of items could occupy less space when packed together than the sum of their individual sizes. This variant is known as VM packing since when Virtual machines (VMs) are packed in a server, their total memory requirement could decrease due to pages shared by the VMs that need only be stored once. If items can share space in arbitrary ways, the bin packing
problem is hard to even approximate. However, if the space sharing fits into a hierarchy, as is the case with memory sharing in virtual machines, the bin packing problem can be efficiently approximated. Another variant of bin packing of interest in practice is the so-called online bin packing. Here the objects of
different volume are supposed to arrive sequentially and the decision maker has to decide whether to select and pack the currently observed item, or else to let it pass. 
<h2>Types of algorithm for Bin packing:</h2>

>1)First Fit

>2)Best Fit

>3)Offline Algorithm

>4)First fit decreasing

>5)Next fit