/*

⭐ SLIDING WINDOW TECHNIQUE

(You will use this in Arrays + Strings again and again)

🚀 What is Sliding Window?

It is a technique that helps you process contiguous elements in an array or string efficiently.

Instead of creating new subarrays again and again,
👉 you use a window that moves (slides) across the array.

There are two types:

Fixed-size window

Variable-size window

Let me teach both in a very easy way.

🔷 1. Fixed Size Sliding Window

Used when the window size k is already given in the problem.

Example Problem

Find the maximum sum of any subarray of size k = 3

Naive solution (Bad)

Check every subarray → O(n*k)

Sliding Window (Good) — O(n)
Logic:

Take first window of size k → compute the sum

Move the window by 1:

Subtract the element going out

Add the element coming in

Keep track of the best answer

Visual:
[2 5 1 8 2 9 1]
|-----|
  |-----|
    |-----|


You don’t recompute the whole window again—just adjust it.

🔷 2. Variable Size Sliding Window

Window size changes based on a condition.

Example

Find the longest substring with no repeating characters.

Here:

Window expands right until a repeat happens

When repeat occurs → shrink from the left

Logic:

Use a set/map to track characters

Expand right pointer

If duplicate occurs → move left pointer to remove it

Keep track of max window size

Visual:
abcabcbb
^----^         window = "abc"


When ‘a’ repeats:

 move left → "bca"

⭐ Why Sliding Window is Important?

You will use it in problems like:

Longest substring without repeating chars

Minimum window substring

Max/Min sum subarray

Count subarrays with given sum

Longest ones with k flips

Anagrams in string

Fruits in basket problem

Interviewers LOVE this topic.

🔥 Simple Template (Variable Size)
left = 0
for right in range(n):
    # expand window

    while (window is invalid):
        # shrink window
        left += 1

    # update answer


*/