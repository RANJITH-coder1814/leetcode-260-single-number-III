# 260. Single Number III

## 🧩 Problem
Given an integer array `nums`, in which exactly two elements appear only once and all the other elements appear exactly twice, find the two elements that appear only once.

You must write an algorithm that runs in linear time and uses only constant extra space.

## 🔍 Approach (Bit Manipulation - XOR)

1. XOR all elements → duplicates cancel out → result = `a ^ b`
2. Find the rightmost set bit in `a ^ b`
3. Divide numbers into two groups based on that bit
4. XOR each group separately to get the two unique numbers

## ⚡ Complexity
- Time: O(n)
- Space: O(1)

## 📌 Example
