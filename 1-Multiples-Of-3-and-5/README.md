#Problem:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

#How to solve:
Basically first thing you will try to do is loop with i=0;i<1000;i++ and check if the i is a multiple of 3 or 5 and add that number into sum.
Problem with this; You have to go through each element, if you want to find the first 10000000 elements, that process would take many minutes.

#Alp Algorithm: 
Yes I just named that Algorithm I found with my own name I am such a cool person.

What we have to do is check the sums separately;

Numbers between 0 and 9 -> 0, 3, 5, 6, 9 => Sum 23
Numbers between 10 and 19-> 10, 12, 15, 17 => Sum 55
Numbers between 20 and 29 -> 20, 21, 24, 25, 27 => Sum 117
Numbers between 30 and 39 -> 30, 33, 35, 36, 39 => Sum 173 (You can see a loop starting here)
Numbers between 40 and 49 -> 40(10+30), 42(12+30), 45(15+30), 47(17+30) => Sum 55 + 30 * Number of items = 175
Numbers between 50 and 59 -> 20+30, 21+30, 24+30, 25+30, 27+30 => Sum 117 + 30 * Number of items = 267

So we get a loop in every third item here. If we group those items in their own group we get;

23 + 150*0, 23 + 150*1 , 23 + 150*2... for first group
55 + 120*0, 55 + 120*1, 55 + 120*2... for second group
117 + 150*0, 117 + 150*1, 117 + 150*2... for third group

This goes unitil Numbers between 990 and 999, which is element of the first group.
So we reduced the loop size from 1000 to 100, we gained 10 times the speed! And we got rid of all the if statements, thats also a plus.
We have to divide 100 for those 3 groups and we can start summing.

In our case, the problem started and ended with the first group so first group will get one more size in loop.
We divide our loop with size of 100 into three
First group will get 34
Second and third group will get 33

You can go and read the source code now.
