# Problem:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

# How to solve:

Basically first thing you will try to do is loop with i=0;i<1000;i++ and check if the i is a multiple of 3 or 5 and add that number into sum.
Problem with this; You have to go through each element, if you want to find the first 10000000 elements, that process would take many minutes.

# Alp algorithm (Solution 1):

Yes I just named that Algorithm I found with my own name I am such a cool person.

What we have to do is check the sums separately;
```
Numbers between 0 and 9 -> 0, 3, 5, 6, 9 => Sum 23

Numbers between 10 and 19-> 10, 12, 15, 17 => Sum 55

Numbers between 20 and 29 -> 20, 21, 24, 25, 27 => Sum 117

Numbers between 30 and 39 -> 30, 33, 35, 36, 39 => Sum 173 (You can see a loop starting here)

Numbers between 40 and 49 -> 40(10+30), 42(12+30), 45(15+30), 47(17+30) => Sum 55 + 30 * Number of items = 175

Numbers between 50 and 59 -> 20+30, 21+30, 24+30, 25+30, 27+30 => Sum 117 + 30 * Number of items = 267
```
So we get a loop in every third item here. If we group those items in their own group we get;
```
23 + 150x0, 23 + 150x1 , 23 + 150x2... for first group

55 + 120x0, 55 + 120x1, 55 + 120x2... for second group

117 + 150x0, 117 + 150x1, 117 + 150x2... for third group
```
This goes until Numbers between 990 and 999, which is element of the first group.

So we reduced the loop size from 1000 to 100, we gained 10 times the speed! And we got rid of all the if statements, thats also a plus.

We have to divide our loop size for those 3 groups and we can start summing.


In our case, the problem started and ended with the first group so first group will get one more size in loop.

We divide our loop with size of 100 into three

First group will get 34

Second and third group will get 33


# Solution 2:

If we want to sum a series of numbers in a form which have no change or a fixed amount of increase or decrease between each number

For example, if we want to sum numbers from 1 to 100 we can use this formula;
```
(Number of items) * (Median of those items) 
( (Last item - First item)/(Amount of increase) +1) * ((Last item + first item) / 2)
(100-1/1+1) * ((100 + 1) / 2)
100 * 55 = 5500
```

We can use this formula for everything which met the conditions above.

```
Sum those numbers: 9 3 6 12 18 15
We can sort this numbers like: 3 6 9 12 15 18, and they met the condition above

(Number of items) * (Median of those items) 
((18-3)/3+1) * ((18+3)/2)

6 * 10.5 = 63
```

In our terms, we have three group;
```
First group 3, 6, 9 ..., 999

Second group 5, 10, 15, ..., 995
```
If we sum the first two groups, we reach 266333, which is higher than we should get, so why does this happen?

This happens because those two sets have a intersection;
```
Third group 15,30,45...,990
```
First and Second group contain the third group, so we add third group two times instead of one

We add 15 in first group at 5th item, we add 15 again in second group at 3rd item.

We have to subtract sum of that group from the total sum

Sum of this group is;
```
((990-15)/15+1) * ((990+15)/2)

33165
```
If we subtract this value from our first value we will find;
```
266333 - 33165 = 233168
```
The answer we are looking for!


You can go and read the source code now.
