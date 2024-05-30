# [Silver II] Part Elf (Large) - 12243 

[문제 링크](https://www.acmicpc.net/problem/12243) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

수학

### 제출 일자

2024년 5월 30일 14:07:07

### 문제 설명

<p>Vida says she's part Elf: that at least one of her ancestors was an Elf. But she doesn't know if it was a parent (1 generation ago), a grandparent (2 generations ago), or someone from even more generations ago. Help her out!</p>

<p>Being part Elf works the way you probably expect. People who are Elves, Humans and part-Elves are all created in the same way: two parents get together and have a baby. If one parent is A/B Elf, and the other parent is C/D Elf, then their baby will be (A/B + C/D) / 2 Elf. For example, if someone who is 0/1 Elf and someone who is 1/2 Elf have a baby, that baby will be 1/4 Elf.</p>

<p>Vida is certain about one thing: 40 generations ago, she had 2<sup>40</sup> different ancestors, and each one of them was 1/1 Elf or 0/1 Elf.</p>

<p>Vida says she's <strong>P</strong>/<strong>Q</strong> Elf. Tell her what is the minimum number of generations ago that there could have been a 1/1 Elf in her family. If it is not possible for her to be <strong>P</strong>/<strong>Q</strong> Elf, tell her that she must be wrong!</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <strong>T</strong>. <strong>T</strong> lines follow. Each contains a fraction of the form <strong>P</strong>/<strong>Q</strong>, where <strong>P</strong> and <strong>Q</strong> are integers.</p>

<p>Limits</p>

<ul>
	<li>1 ≤ <strong>T</strong> ≤ 100.</li>
	<li><span style="line-height:1.6em">1 ≤ </span><strong style="line-height:1.6em">P</strong><span style="line-height:1.6em"> < </span><strong style="line-height:1.6em">Q</strong><span style="line-height:1.6em"> ≤ 10</span><sup style="line-height:1.6em">12</sup><span style="line-height:1.6em">.</span></li>
	<li><strong>P</strong> and <strong>Q</strong> <em>may</em> have common factors. <strong>P</strong>/<strong>Q</strong> is <em>not</em> guaranteed to be a fraction in lowest terms.</li>
</ul>

### 출력 

 <p>For each test case, output one line containing "Case #x: y", where x is the test case number (starting from 1) and y is the minimum number of generations ago a 1/1 Elf in her family could have been if she is <strong>P</strong>/<strong>Q</strong> Elf. If it's impossible that Vida could be <strong>P</strong>/<strong>Q</strong> Elf, y should be the string "impossible" (without the quotes).</p>

