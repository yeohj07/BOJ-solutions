# [Silver I] Transitive Closure - 7827 

[문제 링크](https://www.acmicpc.net/problem/7827) 

### 성능 요약

메모리: 2292 KB, 시간: 352 ms

### 분류

너비 우선 탐색(bfs), 깊이 우선 탐색(dfs), 그래프 이론(graphs), 그래프 탐색(graph_traversal)

### 문제 설명

<p>평소 그래프 이론에 관심이 많았던 주연이는 최근에 방향그래프에서 <a href="https://en.wikipedia.org/wiki/Transitive_closure">transitive closure</a>를 계산하는 방법중 하나인 <a href="https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm">Warshall algorithm</a>을 공부하였다. 주연이는 최근에 사귀게 된 남자친구 윤호가 얼마나 똑똑한지 시험하기 위해 transitive closure를 계산하는 방법을 윤호에게 물어보기로 결심했다. 질문의 내용은 아래와 같다.</p>

<p>"윤호오빠, ...</p>

<p>방향그래프 G = <V, E> (2<=|V|<=2,500. 1<=|E|<=10,000)가 주어졌을 때, G의 transitive closure는 0, 1로 구성된 V×V크기의 행렬 R로 표현할 수 있다. 만약 G의 두 정점 A와 B에 대해, A에서 B로 가는 경로가 존재하면 행렬R의 A행 B열의 값을 1로, 경로가 존재하지 않으면 0으로 채워넣는 것이다.</p>

<p>주어진 그래프 G에 대해 행렬 R을 구하여라. 단, R의 크기가 매우 커질 수 있으므로 그래프 G의 <strong>서로 다른</strong> 두 정점 X에서 Y에 대해, X에서 Y로 가는 경로가 존재하는 정점 쌍 (X, Y)의 개수를 출력하도록 한다. 즉, 그래프 G에 대한 행렬R에서 (행≠열)인 모든 셀에 대해 '1'로 채워진 셀의 개수를 출력한다.</p>

<p>오빠 할 수 있지 ?"</p>

<p>자신의 밑천이 주연이에게 드러날까 두려운 윤호는 여러분들에게 도움을 요청했다. 윤호와 주연이 사이를 갈라놓을지 말지는 여러분들의 손에 달렸다.</p>

<p><img src="https://www.acmicpc.net/userupload/Hibbah/201504/d9b29c14ef1d7d5d60b352a4b115913e.jpg" style="height:217.469879518072px; width:200px"></p>

### 입력 

 <p>입력의 첫 줄에는 테스트 케이스의 수 T (T<=10)가 주어진다.</p>

<p>각 테스트 케이스마다 첫 번째 줄에 정점과 간선의 수 N, M (2<=|V|<=2,500. 1<=|E|<=10,000)이 주어지고, 다음 M개의 줄에 각각 간선정보 A, B (1<=A, B<=N)가 주어진다. A에서 B로 가는 간선이 존재한다는 의미이다. 동일한 간선에 대한 입력이 중복으로 주어지지 않는다.</p>

### 출력 

 <p>각 테스트 케이스마다 한 줄에 X≠Y인 정점 X, Y에 대해 X에서 Y로 가는 경로가 존재하는 정점쌍 (X, Y)의 개수를 출력한다.</p>

