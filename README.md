Name: June Mawia Kennedy
Registration Number: EB3/67278/23

​1. Description of the Algorithm

​Bitonic Sort is a parallel sorting algorithm based on the concept of sorting networks. It works by recursively dividing a list into two halves, sorting one half in ascending order and the other in descending order to create a bitonic sequence. A bitonic sequence is then merged into a fully sorted list using a series of predefined comparisons and swaps.

​2. Step-by-Step Demonstration

​Imagine we have a small list: [3, 7, 4, 8]
​Forming Bitonic Pairs: Compare (3, 7) and (4, 8). Sort the first pair ascending [3, 7] and the second descending [8, 4].
​Creating the Bitonic Sequence: The list is now [3, 7, 8, 4]. This is a bitonic sequence .
​Bitonic Merge:
​Compare element i with i+2: (3 vs 8) and (7 vs 4).
​Swap 7 and 4 because 7 > 4. List becomes [3, 4, 8, 7].
​Final Comparison: Compare (3, 4) and (8, 7). Swap 8 and 7.
​Result: [3, 4, 7, 8] — Sorted!

​3. Complexity Analysis

//​Time Complexity
​in bitonic Sort  the number of comparisons is fixed regardless of the initial order of the elements.
​Best Case: O(n \log^2 n)
​Average Case: O(n \log^2 n)
​Worst Case: O(n \log^2 n)
Reasoning: The algorithm consists of \log n stages of merging. Each merge takes \log n steps of comparisons for n elements. Unlike QuickSort, it doesn't have a "bad" pivot that slows it down; it always follows the same mathematical path.

//​Space Complexity
​Space Complexity: O(n \log^2 n) for the recursive implementation (due to the call stack), or O(n) if implemented iteratively. My solution uses a recursive approach for clarity.

//results

Original Size: 1 | Padded to: 1
Comparisons: 0 | Swaps: 0
------------------------------------------------
Original Size: 2 | Padded to: 2
Comparisons: 1 | Swaps: 1
------------------------------------------------
Original Size: 3 | Padded to: 4
Comparisons: 6 | Swaps: 4
------------------------------------------------
Original Size: 4 | Padded to: 4
Comparisons: 6 | Swaps: 1
------------------------------------------------
Original Size: 5 | Padded to: 8
Comparisons: 24 | Swaps: 10
------------------------------------------------
Original Size: 10 | Padded to: 16
Comparisons: 80 | Swaps: 42
------------------------------------------------
Original Size: 250 | Padded to: 256
Comparisons: 4608 | Swaps: 2306
------------------------------------------------
Original Size: 999 | Padded to: 1024
Comparisons: 28160 | Swaps: 14119
------------------------------------------------
Original Size: 9999 | Padded to: 16384
Comparisons: 860160 | Swaps: 439389
------------------------------------------------
Original Size: 89786 | Padded to: 131072
Comparisons: 10027008 | Swaps: 5188965
------------------------------------------------
Original Size: 789300 | Padded to: 1048576
Comparisons: 110100480 | Swaps: 54898752
------------------------------------------------
Original Size: 1780000 | Padded to: 2097152
Comparisons: 242221056 | Swaps: 120553632
------------------------------------------------

