# [Silver I] 카드 바꾸기 - 25401 

[문제 링크](https://www.acmicpc.net/problem/25401) 

### 성능 요약

메모리: 2020 KB, 시간: 72 ms

### 분류

브루트포스 알고리즘(bruteforcing), 구현(implementation), 수학(math)

### 문제 설명

<p>$N$개의 카드가 놓여있다. 편의상 가장 왼쪽에 있는 카드를 $1$번 카드, 그 다음에 있는 카드를 $2$번 카드 $\dots$, 가장 오른쪽에 있는 카드가 $N$번 카드라고 하자.</p>

<p>$N$개의 카드에는 각각 정수가 하나씩 적혀있다. $i$번 카드에 적혀있는 수를 $x_i$라고 하자.</p>

<p>$N$개의 카드 중 일부에 적혀있는 수들을 적절히 바꾸어서, 왼쪽에서 오른쪽으로 갈수록 카드에 적혀있는 수들이 일정하게 증가하거나, 감소하거나, 또는 모든 수들이 같도록 하고 싶다.</p>

<p>카드에 적혀있는 수들을 바꿀 때는 정수 값으로만 바꿀 수 있으며, 바꾸는 횟수를 최소화해야 한다.</p>

<p>예를 들어, 아래의 그림과 같이 카드들이 주어졌다고 하자.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/8d506a7b-640a-4d7b-9e11-1c3b2a98cc47/-/preview/" style="width: 248px; height: 84px;"></p>

<p>이 경우 $3$번 카드에 적혀있는 수를 $3$으로 바꾸면 아래와 같이 $1$씩 증가하도록 할 수 있고, 적혀있는 수를 바꾼 카드의 수는 $1$개이다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/55eb58ab-6c53-4513-8dff-dcf7d94edf8a/-/preview/" style="width: 248px; height: 84px;"></p>

<p>다음과 같이 모든 카드에 적혀있는 수를 $2$가 되도록 할 수도 있다. 이때, 적혀있는 수를 바꾼 카드의 수는 $2$개이다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/cf3e8f3d-fef9-4920-9196-930d978f42e3/-/preview/" style="width: 248px; height: 84px;"></p>

<p>가장 왼쪽에 있는 카드부터 가장 오른쪽에 있는 카드까지 각 카드에 적혀있는 수들이 순서대로 주어질 때, 조건을 만족하도록 하려면 바꿔야 할 카드 수의 최솟값을 구하여라.</p>

### 입력 

 <p>첫 번째 줄에 카드의 수 $N$이 주어진다.</p>

<p>두 번째 줄에는 각 카드에 적힌 수 $x_i$가 공백을 사이에 두고 순서대로 주어진다.</p>

### 출력 

 <p>첫 번째 줄에 답을 출력한다.</p>

