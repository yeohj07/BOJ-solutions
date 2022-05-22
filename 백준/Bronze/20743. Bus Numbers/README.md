# [Bronze II] Bus Numbers - 20743 

[문제 링크](https://www.acmicpc.net/problem/20743) 

### 성능 요약

메모리: 2020 KB, 시간: 140 ms

### 분류

브루트포스 알고리즘(bruteforcing), 수학(math)

### 문제 설명

<p>A famous story about the mathematicians <em>G.H. Hardy</em> and <em>Srinivasa Ramanujan</em> goes as follows (as told by Hardy):</p>

<blockquote>
<p>I remember once going to see him (Ramanujan) when he was lying ill at Putney. I had ridden in taxicab No. 1729, and remarked that the number seemed to be rather a dull one, and that I hoped it was not an unfavourable omen. "No", he replied, "it is a very interesting number; it is the smallest number expressible as the sum of two [positive] cubes in two different ways."</p>
</blockquote>

<p>It is from this story the <em>taxicab numbers</em> got their name. The $n$'th taxicab numbers is defined to be the smallest number that can be expressed as a sum of two <em>positive</em> cube numbers in $n$ distinct ways.</p>

<p>It turns out that these numbers grows rather quickly. This makes them very hard to compute, which is not very fun. A variation of the concept is to consider what we will call the <em>bus numbers</em> -- all the numbers which can expressed as the sum of two <em>positive</em> cube numbers in <em>at least</em> $2$ distinct ways. Note that according to this definition, all taxicab numbers (except the first) are also bus numbers.</p>

<p>Your task is to write a program that generates bus numbers; in particular, the <em>largest</em> bus number that is <em>at most</em> equal to some limit $m$.</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>one line with an integer $m$ ($1 \le m \le 400\,000$), the upper bound of the bus number. </li>
</ul>

### 출력 

 <p>Output the largest bus number $x$ which does not exceed $m$. If there is no such number, output <code>none</code>.</p>

