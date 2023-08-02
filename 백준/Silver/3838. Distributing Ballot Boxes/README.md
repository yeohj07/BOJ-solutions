# [Silver III] Distributing Ballot Boxes - 3838 

[문제 링크](https://www.acmicpc.net/problem/3838) 

### 성능 요약

메모리: 5928 KB, 시간: 548 ms

### 분류

이분 탐색, 구현

### 문제 설명

<p>Today, besides SWERC’11, another important event is taking place in Spain which rivals it in importance: General Elections. Every single resident of the country aged 18 or over is asked to vote in order to choose representatives for the Congress of Deputies and the Senate. You do not need to worry that all judges will suddenly run away from their supervising duties, as voting is not compulsory.</p>

<p>The administration has a number of ballot boxes, those used in past elections. Unfortunately, the person in charge of the distribution of boxes among cities was dismissed a few months ago due to financial restraints. As a consequence, the assignment of boxes to cities and the lists of people that must vote in each of them is arguably not the best. Your task is to show how efficiently this task could have been done.</p>

<p>The only rule in the assignment of ballot boxes to cities is that every city must be assigned at least one box. Each person must vote in the box to which he/she has been previously assigned. Your goal is to obtain a distribution which minimizes the maximum number of people assigned to vote in one box.</p>

<p>In the first case of the sample input, two boxes go to the first city and the rest to the second, and exactly 100, 000 people are assigned to vote in each of the (huge!) boxes in the most efficient distribution. In the second case, 1, 2, 2 and 1 ballot boxes are assigned to the cities and 1, 700 people from the third city will be called to vote in each of the two boxes of their village, making these boxes the most crowded of all in the optimal assignment.</p>

### 입력 

 <p>The first line of each test case contains the integers N (1 ≤ N ≤ 500, 000), the number of cities, and B (N ≤ B ≤ 2, 000, 000), the number of ballot boxes. Each of the following N lines contains an integer a<sub>i</sub>, (1 ≤ a<sub>i</sub> ≤ 5, 000, 000), indicating the population of the ith city.</p>

<p>A single blank line will be included after each case. The last line of the input will contain -1 -1 and should not be processed.</p>

### 출력 

 <p>For each case, your program should output a single integer, the maximum number of people assigned to one box in the most efficient assignment.</p>

