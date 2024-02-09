<h2><a href="https://www.geeksforgeeks.org/problems/does-array-represent-heap4345/1?page=1&category=Tree,Binary%20Search%20Tree,BFS&sortBy=difficulty">Does array represent Heap</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr </strong>of size <strong>n</strong>, the task is to check if the given array represents a <a href="https://www.geeksforgeeks.org/difference-between-min-heap-and-max-heap/">Max Heap</a>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:<br></strong>arr[] = {90, 15, 10, 7, 12, 2}
<strong>Output: <br></strong>1<br><strong>Explanation:</strong> 
The given array represents below tree
       90
     /    \
   15      10
  /  \     /
7    12  2
The tree follows max-heap property as every
node is greater than all of its descendants.
</span></pre>
<div><span style="font-size: 18px;"><strong>Example 2:</strong></span></div>
<pre><span style="font-size: 18px;"><strong>Input:  <br></strong>arr[] = {9, 15, 10, 7, 12, 11}
<strong>Output:<br></strong>0
<strong>Explanation:</strong><br>The given array represents below tree
       9
     /    \
   15      10
  /  \     /
7    12  11
The tree doesn't follows max-heap property 9 is
smaller than 15 and 10, and 10 is smaller than 11. </span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>isMaxHeap()</strong>&nbsp;which takes the array <strong>arr[]</strong> and its size <strong>n</strong><strong> </strong>as inputs and returns <strong>True</strong>&nbsp;if the given array is could represent a valid <strong>Max Heap</strong>, else return <strong>False</strong> (without quotes).</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>5</sup><br>1 ≤ arr<sub>i</sub> ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Cisco</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;