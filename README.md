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