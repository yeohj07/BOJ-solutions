# [Silver III] Yes or No? - 5184 

[문제 링크](https://www.acmicpc.net/problem/5184) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

그리디 알고리즘(greedy), 정렬(sorting)

### 문제 설명

<p>Multiple choice tests are rather easy to grade, and therefore very popular among some teachers. Some students like them (“you have a chance to get the answer right even if you have no clue”), some students hate them (“there must be a hidden catch somewhere”). The ultimate form of multiple choice questions are true/false ones.</p>

<p>Now assume that you are taking a true/false test. For each question, you have an a priori estimate of how likely each of the two answers is right. For question i, you think that the answer is “Yes” with probability y<sub>i</sub>, and “No” with probability 1 − y<sub>i</sub>. So of course, you should just pick whichever is higher between y<sub>i</sub> and 1 − y<sub>i</sub> (if y<sub>i</sub> = 1/2, you could go either way).</p>

<p>The catch? If your estimate of “Yes” is higher than for “No” for all questions, you may suspect something is fishy. Most teachers don’t like clear patterns in their answer key, and try to mix things up. Suppose that you know that this particular teacher always has a number of “Yes” answers between ℓ and r (inclusive), for some ℓ ≤ r. Then, picking the set of questions to answer “Yes”, maximizing your total expected number of correct answers is not quite trivial any more. So you had better write a program to do it. Specifically, you want to find the answers to give to all questions so as to maximize the expected number of questions you get right, but giving the answer “Yes” at least ℓ and at most r times.</p>

### 입력 

 <p>The first line contains a number K ≥ 1, which is the number of input data sets in the file. This is followed by K data sets of the following form:</p>

<p>The first line of each data set contains three integers ℓ ≤ r ≤ n, where n ≤ 200 is the total number of questions on the exam, ℓ is the minimum number of questions on which the answer will be “Yes”, and r the maximum number.</p>

<p>This is followed by n lines, each giving a fractional number yi ∈ [0, 1] for the corresponding question i.</p>

### 출력 

 <p>For each data set, first output “Data Set x:” on a line by itself, where x is its number. Then, output the maximum total number of questions you can get right subject to all the constraints, rounded to two decimals.</p>

