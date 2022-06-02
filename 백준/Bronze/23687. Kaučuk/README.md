# [Bronze I] Kaučuk - 23687 

[문제 링크](https://www.acmicpc.net/problem/23687) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현(implementation), 시뮬레이션(simulation)

### 문제 설명

<p>Davor the scientist writes his papers in <span class="latex">L<sup>a</sup>T<sub>e</sub>X</span>. Inspired by <span class="latex">L<sup>a</sup>T<sub>e</sub>X</span>, he came up with Kaučuk. Kaučuk is a very simple program for preparing a piece of text for print. It allows you to number the headings of sections, subsections and subsubsections and prepare them for print.</p>

<p>Kaučuk has only three different commands:</p>

<ul>
	<li>The <code>section</code> command starts a new section. All sections from the input are numbered in the output with positive integers starting from 1, in the order they appear in the input (see first example).</li>
	<li>The <code>subsection</code> command starts a new subsection. Subsections are numbered using two numbers: the number of the section which contains the subsection, and the number of the subsection within the section (see second example). In each section the subsection numbering starts again from 1 (see third example).</li>
	<li>The <code>subsubsection</code> command starts a new subsubsection which uses three numbers: the number of the section, the number of the subsection and the number of the subsubsection within the subsection, in a manner similar to subsections within sections (see second example).</li>
</ul>

<p>It is guaranteed that in the input, each subsection is contained in some section, and each subsubsection is contained in some subsection. Davor might be a fine scientist, but programming is not his strong suit, which is why he is asking you to help him write a program which prepares a text written in Kaučuk for print.</p>

### 입력 

 <p>The first line contains a positive integer n (1 ≤ n ≤ 100), the number of lines of Kaučuk commands.</p>

<p>The following n lines contain Davor’s Kaučuk code. Each line of code is made up from two strings of characters, separated by a single space: the type of section (<code>section</code>, <code>subsection</code> or <code>subsubsection</code>) and its title. Each title is made up from at most 20 lowercase letters.</p>

### 출력 

 <p>In n lines you should number and print the titles of the sections, subsections and subsubsections from Davor’s code.</p>

