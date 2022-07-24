# [Silver III] World Cup Noise - 6170 

[문제 링크](https://www.acmicpc.net/problem/6170) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

다이나믹 프로그래밍(dp)

### 문제 설명

<p>"KO-RE-A, KO-RE-A" shout 54.000 happy football fans after their team has reached the semifinals of the FIFA World Cup in their home country. But although their excitement is real, the Korean people are still very organized by nature. For example, they have organized huge trumpets (that sound like blowing a ship's horn) to support their team playing on the field. The fans want to keep the level of noise constant throughout the match. </p>

<p>The trumpets are operated by compressed gas. However, if you blow the trumpet for 2 seconds without stopping it will break. So when the trumpet makes noise, everything is okay, but in a pause of the trumpet,the fans must chant "KO-RE-A"! </p>

<p>Before the match, a group of fans gathers and decides on a chanting pattern. The pattern is a sequence of 0's and 1's which is interpreted in the following way: If the pattern shows a 1, the trumpet is blown. If it shows a 0, the fans chant "KO-RE-A". To ensure that the trumpet will not break, the pattern is not allowed to have two consecutive 1's in it. </p>

<p>Given a positive integer n, determine the number of different chanting patterns of this length, i.e., determine the number of n-bit sequences that contain no adjacent 1's. For example, for n = 3 the answer is 5 (sequences 000, 001, 010, 100, 101 are acceptable while 011, 110, 111 are not).</p>

### 입력 

 <p>The first line contains the number of scenarios. </p>

<p>For each scenario, you are given a single positive integer less than 45 on a line by itself.</p>

### 출력 

 <p>The output for every scenario begins with a line containing "Scenario #i:", where i is the number of the scenario starting at 1. Then print a single line containing the number of n-bit sequences which have no adjacent 1's. Terminate the output for the scenario with a blank line.</p>

