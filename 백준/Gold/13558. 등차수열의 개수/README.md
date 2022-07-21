# [Gold III] 등차수열의 개수 - 13558 

[문제 링크](https://www.acmicpc.net/problem/13558) 

### 성능 요약

메모리: 2492 KB, 시간: 2384 ms

### 분류

조합론(combinatorics), 수학(math), 누적 합(prefix_sum)

### 문제 설명

<p>길이가 N인 수열 A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>이 주어진다. 이때, 1 ≤ i < j < k ≤ N 이면서, A<sub>j</sub> - A<sub>i</sub> = A<sub>k</sub> - A<sub>j</sub>를 만족하는 (i, j, k) 쌍의 개수를 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 수열의 크기 N (3 ≤ N ≤ 100,000)가 주어진다.</p>

<p>둘째 줄에는 A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>이 주어진다. (1 ≤ A<sub>i</sub> ≤ 30,000)</p>

### 출력 

 <p>1 ≤ i < j < k ≤ N 이면서, A<sub>j</sub> - A<sub>i</sub> = A<sub>k</sub> - A<sub>j</sub>를 만족하는 (i, j, k) 쌍의 개수를 출력한다.</p>

