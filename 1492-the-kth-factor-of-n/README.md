<h2><a href="https://leetcode.com/problems/the-kth-factor-of-n/">1492. The kth Factor of n</a></h2><h3>Medium</h3><hr><div data-phid="194"><p data-phid="195">You are given two positive integers <code data-phid="196">n</code> and <code data-phid="197">k</code>. A factor of an integer <code data-phid="198">n</code> is defined as an integer <code data-phid="199">i</code> where <code data-phid="200">n % i == 0</code>.</p>

<p data-phid="201">Consider a list of all factors of <code data-phid="202">n</code> sorted in <strong data-phid="203">ascending order</strong>, return <em data-phid="204">the </em><code data-phid="205">k<sup data-phid="206">th</sup></code><em data-phid="207"> factor</em> in this list or return <code data-phid="208">-1</code> if <code data-phid="209">n</code> has less than <code data-phid="210">k</code> factors.</p>

<p data-phid="211">&nbsp;</p>
<p data-phid="212"><strong class="example" data-phid="213">Example 1:</strong></p>

<pre data-phid="214"><strong data-phid="215">Input:</strong> n = 12, k = 3
<strong data-phid="216">Output:</strong> 3
<strong data-phid="217">Explanation:</strong> Factors list is [1, 2, 3, 4, 6, 12], the 3<sup data-phid="218">rd</sup> factor is 3.
</pre>

<p data-phid="219"><strong class="example" data-phid="220">Example 2:</strong></p>

<pre data-phid="221"><strong data-phid="222">Input:</strong> n = 7, k = 2
<strong data-phid="223">Output:</strong> 7
<strong data-phid="224">Explanation:</strong> Factors list is [1, 7], the 2<sup data-phid="225">nd</sup> factor is 7.
</pre>

<p data-phid="226"><strong class="example" data-phid="227">Example 3:</strong></p>

<pre data-phid="228"><strong data-phid="229">Input:</strong> n = 4, k = 4
<strong data-phid="230">Output:</strong> -1
<strong data-phid="231">Explanation:</strong> Factors list is [1, 2, 4], there is only 3 factors. We should return -1.
</pre>

<p data-phid="232">&nbsp;</p>
<p data-phid="233"><strong data-phid="234">Constraints:</strong></p>

<ul data-phid="235">
	<li data-phid="236"><code data-phid="237">1 &lt;= k &lt;= n &lt;= 1000</code></li>
</ul>

<p data-phid="238">&nbsp;</p>
<p data-phid="239"><strong data-phid="240">Follow up:</strong></p>

<p data-phid="241">Could you solve this problem in less than O(n) complexity?</p>
</div>