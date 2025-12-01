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

----------------------------------------------------------------------------------------------------



⭐ TWO POINTERS TECHNIQUE

This one is used in:

Arrays

Strings

Linked Lists

Sliding window (two pointers is the base)

Sorting-based problems

Interview classics

And it's VERY easy to learn.

🚀 What is Two Pointers?

Two pointers = using two indices to solve a problem more efficiently than nested loops.

Types:

Opposite Direction Pointers (start + end)

Same Direction Pointers (fast + slow)

Let’s understand both with examples.

⭐ 1. Opposite Direction Pointers

Used when:

The array is sorted

You want to find pairs, sums, conditions

Example Problem:

Find if there exist two numbers whose sum = target

Naive approach:

for i:
    for j:
        if a[i] + a[j] == target:
            return True


O(n²) — slow.

Two Pointers:
left = 0
right = n-1

while left < right:
    sum = arr[left] + arr[right]

    if sum == target:
        return True

    elif sum < target:
        left++         # increase sum

    else:
        right--        # decrease sum

Why it works?

Because in a sorted array:

Moving left pointer → increases value

Moving right pointer → decreases value

So we can adjust the sum intelligently without brute force.

⭐ 2. Same Direction Pointers (Fast & Slow)

Used to detect patterns or cycles.

Example:

Check if a Linked List has a loop

Fast and slow pointer:

slow moves 1 step

fast moves 2 steps

if they meet → loop exists

This is called Floyd’s Cycle Detection Algorithm.

Why it works?

Fast pointer will eventually catch the slow one if a cycle exists — like two people running on a circular track.

⭐ Why Two Pointers are AMAZING?
Problem	Without Two Pointers	With Two Pointers
Pair sum	O(n²)	O(n)
Remove duplicates	O(n)	O(n) (in place)
Move zeros	O(n)	O(n)
Reverse string	O(n)	O(n)
Palindrome check	O(n)	O(n)

And uses NO extra space (O(1)).

🔥 Most common places where Two Pointers is used:

Check palindrome

Reverse array/string

Two-sum (sorted)

Sort colors (Dutch flag)

Merge sorted arrays

Remove duplicates from sorted array

Partition around a value

Sliding window (two pointer version)

Linked list cycle detection

Middle of linked list

⭐ Visual Understanding

Example:

arr = [1, 2, 3, 4, 9, 12]
target = 11

L → 1
R →           12   sum = 13 > 11 → R--

L → 1
R →        9       sum = 10 < 11 → L++

L → 2
R →        9       sum = 11 ✔ found


No nested loop needed!
*/