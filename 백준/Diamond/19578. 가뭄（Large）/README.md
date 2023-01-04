# [Diamond IV] 가뭄(Large) - 19578 

[문제 링크](https://www.acmicpc.net/problem/19578) 

### 성능 요약

메모리: 5400 KB, 시간: 12 ms

### 분류

쌍대성(duality), 최대 유량(flow), 헝가리안(hungarian), 선형 계획법(linear_programming), 최소 비용 최대 유량(mcmf)

### 문제 설명

<p>가뭄에 찌든 신촌을 위해서 국렬이는 신촌에 비를 내렸다. 가뭄(Small)에서 충분히 비를 내리게 해서 홍익대학교와 이화여자대학교는 가뭄을 해결하였다. 그러나 신촌역 근방이라 제일 크게 피해를 본 연세대학교와 서강대학교는 가뭄이 완전히 해결되지 않았기 때문에 국렬이는 이 두 대학교에 다시 비를 내리게 할 것이다.</p>

<p>각 대학교의 구역들은 <em>N</em>칸으로 구분되어 있으며 연세대학교의 구역은 <em>A</em><sub>1 </sub>~ <em>A<sub>N</sub></em>, 서강대학교의 구역은 <em>B</em><sub>1 </sub>~ <em>B<sub>N</sub></em>으로 구분되어 있다. <em>A<sub>i</sub></em> 구역에 <em>a<sub>i</sub></em> cm 만큼 비를 내리게 하고, <em>B<sub>j</sub></em> 구역에는 <em>b<sub>j</sub></em> cm 만큼 비를 내리게 할 것이다. 여기서 나오는 <em>a<sub>i</sub></em>와 <em>b<sub>j</sub></em>는 음이 아닌 실수다.</p>

<p>그러나 국렬이는 연세대학교 학생이고 인성이 매우 나쁘다. 때문에 비겁하게 연세대학교에 비를 더 많이 내리게 할 것이다. 당연히 서강대학교 측에서는 항의가 올 것이기 때문에 <em>a<sub>i</sub></em> − <em>b<sub>j</sub></em> cm가 <em>c</em><sub><em>i</em>,<em>j</em></sub> cm를 넘기지 않게 비를 내리게 할 것이다. 나쁜 국렬이는 최대한 연세대학교가 이익을 보길 원했기 때문에 $\sum_{i=1}^{N} a_i - \sum_{j=1}^{N} b_j$ cm가 최대가 되길 원했다. 이 최댓값을 구하여라.</p>

### 입력 

 <p>첫 번째 줄에는 <em>N</em>(1 ≤ <em>N</em> ≤ 200)이 주어진다.</p>

<p>두 번째 줄부터 <em>N</em> + 1번째 줄까지, <em>N</em>개의 양의 정수가 주어진다. (<em>i</em> + 1)번째 줄의 <em>j</em>번째 정수는 <em>c</em><sub><em>i</em>,<em>j</em></sub>를 의미한다. (1 ≤ <em>c</em><sub><em>i</em>,<em>j</em></sub> ≤ 100)</p>

### 출력 

 <p>$\sum_{i=1}^{n} a_i - \sum_{j=1}^{n} b_j$의 최댓값을 소수 첫째 자리에서 반올림해 출력한다.</p>

