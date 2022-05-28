# [Bronze I] Rooks - 8271 

[문제 링크](https://www.acmicpc.net/problem/8271) 

### 성능 요약

메모리: 3092 KB, 시간: 40 ms

### 분류

이분 매칭(bipartite_matching), 구성적(constructive), 그리디 알고리즘(greedy)

### 문제 설명

<p>After quite a lot of effort Bytie has finally managed to put <em>n</em> rooks on a board of size <em>n</em> × <em>n</em> so that no two of them attack each other. A quick reminder: a rook attacks all the fields of the board that are located in the same row or in the same column as it is<sup>1</sup>.</p>

<p>Unfortunately, the boy has now accidentally hit the board. As a result, several rooks have fallen down from it. Could you help Bytie put these rooks back on the board? The boy would like to leave the rooks that are still on the board intact.</p>

<p>1. See also <a href="http://en.wikipedia.org/wiki/Rook_(chess)">http://en.wikipedia.org/wiki/Rook_(chess)</a></p>

### 입력 

 <p>The first line of the standard input contains one integer <em>n</em> (2 ≤ <em>n</em> ≤ 1 000) that represents the size of the board. A description of the configuration of the rooks follows: the following <em>n</em> lines contain <em>n</em> characters each. The character '<code>.</code>' represents an empty field whereas the letter '<code>W</code>' represents a field occupied by a rook.</p>

<p>You can assume that there are <em>w</em> rooks on the board with 1 ≤ <em>w</em> ≤ <em>n</em> - 1 and that no pair of rooks on the board attacks each other.</p>

### 출력 

 <p>Your program should write to the standard output <em>n</em> lines containing <em>n</em> characters '<code>.</code>' or '<code>W</code>' each: the final configuration of rooks on the board. The description should contain exactly <em>n</em> occurrences of the letter '<code>W</code>' with <em>w</em> rooks placed in the same positions as in the initial board. No two rooks may attack each other. If there are multiple ways of placing <em>n</em> - <em>w</em> rooks on the initial board, your program should output <i>any</i> one of them.</p>

