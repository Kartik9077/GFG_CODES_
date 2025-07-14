<h2><a href="https://www.geeksforgeeks.org/problems/search-pattern0205/1">Search Pattern (KMP-Algorithm)</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given two strings, one is a text string&nbsp;<strong>txt</strong>&nbsp;and the other is a pattern string&nbsp;<strong>pat</strong>. The task is to print the&nbsp;<strong>indexes</strong>&nbsp;of&nbsp;<strong>all the occurrences</strong>&nbsp;of the pattern string in the text string. Use<strong>&nbsp;0-based</strong>&nbsp;indexing while returning the indices.<br><strong>Note:&nbsp;</strong>Return an empty list in case of no occurrences of pattern.<br></span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>txt = "abcab", pat = "ab"
<strong>Output:</strong> [0, 3]
<strong>Explanation</strong>: The string "ab" occurs twice in txt, one starts at index 0 and the other at index 3. 
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: txt = "abesdu", pat = "edu"
<strong>Output:</strong> []
<strong>Explanation</strong>: There's no substring "edu" present in txt.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: txt = "aabaacaadaabaaba", pat = "aaba"
<strong>Output:</strong> [0, 9, 12]
<strong>Explanation</strong>:<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/703119/Web/Other/blobid0_1731391225.png" width="377" height="188"><br></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ txt.size() ≤ 10<sup>6</sup><br>1 ≤ pat.size() &lt; txt.size()<br>Both the strings consist of lowercase English alphabets.</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Pattern Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;