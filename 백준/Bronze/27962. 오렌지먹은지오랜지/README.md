# [Bronze I] 오렌지먹은지오랜지 - 27962 

[문제 링크](https://www.acmicpc.net/problem/27962) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 문제 설명

<p>오렌지를 먹은 지 오래된 선생님은 부족한 비타민C를 문자열 문제를 통해 보충하려고 한다. "오렌지 먹은 지 오랜지"의 "오렌지", "오랜지"와 같이, 길이가 동일하며 각각 맨 앞, 맨 뒤 문자를 포함하는 어떤 두 부분 문자열이 앞에서부터 하나씩 비교했을 때 정확히 한 문자만 다른 경우, 전체 문자열을 "비타민 문자열"이라 부르려고 한다. 주어진 문자열이 "비타민 문자열"이면 <span style="color:#e74c3c;"><code>YES</code></span>, 아니면 <span style="color:#e74c3c;"><code>NO</code></span>를 출력하라.</p>

<p>두 문자열 $s$와 $t$가 있을 때 $t$가 $s$에서 연속해서 나타난다면 $t$를 $s$의 부분 문자열이라 한다. 예를 들어, <span style="color:#e74c3c;"><code>abcdedc</code></span>의 부분 문자열로는 <span style="color:#e74c3c;"><code>ab</code></span>, <span style="color:#e74c3c;"><code>bcde</code></span>, <span style="color:#e74c3c;"><code>dedc</code></span>, <span style="color:#e74c3c;"><code>abcdedc</code></span> 등이 있다.</p>

<p>두 부분 문자열은 겹쳐도 무방하며, 부분 문자열의 길이는 $1$ 이상이어야 한다. <span style="color:#e74c3c;"><code>aabaacaa</code></span>는 맨 앞 문자를 포함하는 부분 문자열 <span style="color:#e74c3c;"><code>aabaa</code></span>와 맨 뒤 문자를 포함하는 동일한 길이의 부분 문자열 <span style="color:#e74c3c;"><code>aacaa</code></span>를 앞에서부터 하나씩 비교했을 때 정확히 한 문자가 다르기 때문에, 비타민 문자열에 해당한다.</p>

### 입력 

 <p>첫 번째 줄에 문자열의 길이 $N$이 주어진다. $(2 \le N \le 2\ 000)$</p>

<p>두 번째 줄에 문자열이 주어진다. 문자열은 알파벳 소문자로만 이루어져 있다.</p>

### 출력 

 <p>입력으로 주어진 문자열이 "비타민 문자열"이면 <span style="color:#e74c3c;"><code>YES</code></span>를, 아니면 <span style="color:#e74c3c;"><code>NO</code></span>를 출력한다.</p>

