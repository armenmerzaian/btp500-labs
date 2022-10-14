# Lab 5 Reflection and Observations

* Armen Merzaian
* Matthew Maghakian
* Amina Hussein

## Simple sorts

### which algorithm did you find easiest to understand?

The easiest algorithm for me to understand is the Bubblestort. This is because the algorithm makes many small iterative changes to the array,
which makes it extremely inefficient, however modelling it, and visually displaying the sort is simple to comprehend.
	
### which algorithm seemed to be fastest for completing the sort?

The fastest simple algorithm seemed to the insertion sort. However, after analyzing the Big-O of all three simple algorithms, it is 
clear that mathematically they all perform in the same quadratic time complexity for a worst-case scenerio. Therefore they are all equally 		inefficient.  


## Merging Unsorted lists

### how long did this take
My successful attempt took me about 2.5 minutes to complete a full merge sort on the unsorted list.

#### did you make any mistakes along the way (did you choose the wrong number and had to move things around)?
### How many times? 
Yes I attempted the merge sort 4 times with mistakes before I was able to complete the algorithm with a successful sorted output.
The reason my first attempts failed, is because when I was decomposing the array into its smallest form, I forgot to create a sublist
of single elements before I began to compose again.

Once I fully understood the algorithm and its steps, the process did not present any errors.

## Merging Sorted lists

### how long did this take
My successful attempt took me about 1.2 minutes to complete a full merge sort on the sorted list.

### did you make any mistakes along the way (did you choose the wrong number and had to move things around)?
No mistakes were made during the merging of a sorted list.
### How many times?
0

## Sorting larger data sets

|Team member | Sorting time| Sorting Method |
|---|---|---|
| Armen Merzaian |  5min 20s| Merge Sort |
| Matthew Maghakian |  6min 40s| Selection Sort |
| Amina Hussein |  7min 13s| Insert Sort|

### What was fastest time?
Armen had the fastest time at 5min and 20s.

### Describe the algorithm produced by the team member with fastest time.
Armen used the Merge-Sort algorithm

## Partitioning

### how long did it take to partition the data set?
Partitioning the data with QuickSort took 1min and 23s

## Sorting the small piles
### how long did it take for you to sort all of the little piles?
The little piles took us about 54s to sort.

## Putting it together

### As a team discuss things that helped sort the papers... what was useful? what was fast to do?  What was slow?
Sorting the papers became more efficient with not only chosing a more effective algorithm, but by also holding the papers in my hand.
Seperating all the papers on the table made the physical action of moving the numbers around awkward and cumbersome.

### As a team come up with a description of how best to sort a set of numbers on paper.
The best way to sort a set of numbers is to use QuickSort. This is because it is mathematically the most efficient method of sorting with a
a time complexity of \{n log(n)}.
In practice we also saw the difference in efficiency when timing the different sort algorithms.

However, if we are in a position that we need to verify/sort an already-sorted array, Merge Sort or any of the simple sort algorithms will be faster.

### Mix up all your numbers and have each member of the team perform the sort you did.  How long did it take?
|Team member | Sorting time| Sorting Method |
|---|---|---|
| Matthew Maghakian |   3min 58s| Quick Sort |
| Amina Hussein |  3min 9s| Quick Sort|
| Armen Merzaian |  3min 20s| Quick Sort |


