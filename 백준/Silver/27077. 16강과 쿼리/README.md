# [Silver III] 16강과 쿼리 - 27077 

[문제 링크](https://www.acmicpc.net/problem/27077) 

### 성능 요약

메모리: 2032 KB, 시간: 0 ms

### 분류

구현(implementation), 정렬(sorting)

### 문제 설명

<blockquote>
<p>???: 16강 가면 문제를 하나 출제하겠습니다.</p>

<p>???: 16강 가면 루비를 16문제 풀겠습니다.</p>

<p>???: 16강 가면 치킨을 쏘겠습니다.</p>

<p>???: 16강 가면 한별이 코스프레를 하겠습니다.</p>
</blockquote>

<p>다른 경기들이 모두 끝나고, 마지막으로 동시에 한국-포르투갈전과 가나-우루과이전이 열리게 되었다. 이에, 운이 없는 동호는 자신의 불운을 이용하여 몇몇 무리한 공약을 거는 것으로 대한민국의 월드컵 16강 진출 확률을 높이고자 한다.</p>

<p>각 팀이 치른 경기들의 결과를 바탕으로 아래 기준에 따라 결정된 상위 2팀이 16강에 진출한다. 이는 실제 월드컵 조별예선 방식과 차이가 있음에 유의하라. </p>

<ul>
	<li>경기에서 한 팀이 골을 넣었을 때, 그 팀은 득점하고, 상대 팀은 실점하게 된다. 이와는 별개로, 경기 내에서의 그 팀의 점수가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1$</span></mjx-container> 증가한다.</li>
	<li>경기가 끝난 후, 각 경기에서 경기 내에서의 점수(그 팀의 득점 수치와는 별도임에 유의)가 더 높은 팀이 이기고, 더 낮은 팀이 지게 된다. 두 팀의 점수가 같을 경우에는 두 팀은 비긴다.</li>
	<li>경기에서 이긴 팀은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$3$</span></mjx-container>점, 비긴 팀은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1$</span></mjx-container>점, 진 팀은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0$</span></mjx-container>점의 승점을 획득한다.</li>
	<li>모든 경기가 끝난 후, 승점이 더 높은 팀이 더 높은 순위를 차지한다.</li>
	<li>승점이 같은 팀이 존재할 경우에는 득실차가 더 높은 팀이 더 높은 순위를 차지한다. 득실차란 팀의 득점에서 실점을 뺀 값을 말한다.</li>
	<li>승점과 득실차가 같은 팀이 존재할 경우에는 득점이 더 높은 팀이 더 높은 순위를 차지한다.</li>
	<li>위의 조건으로 순위를 정할 수 없는 팀이 존재하면, 재경기의 결과에 따라 순위를 정하게 된다. 재경기는 득점, 실점, 승점에 영향을 주지 않으며, 문제에서 서술한 월드컵 16강 진출은 이러한 재경기의 결과와 관계없이 16강에 진출할 수 있는 상황을 말한다.</li>
</ul>

<p>마지막 두 경기가 시작되기 직전 각 팀의 득점, 실점, 승점이 주어진다.</p>

<p>동호는 경기가 시작되기 직전의 상황에 마지막 두 경기가 모두 0:0으로 끝났을 경우에 한국의 16강 진출 여부를 계산하고, 경기가 진행되며 각 팀의 득점으로 인하여 경기 상황이 변화할 때마다 동호는 그 시점에서 그대로 경기가 종료되었을 때 한국이 16강에 진출하는지 아닌지 계산한다. 계산 결과 한국이 16강에 진출한다면 동호는 기쁨과 동시에 공약을 모두 지켜야 한다는 두려움을 느껴 눈물을 흘린다. 아니라면 동호는 불행해진다.</p>

<p>각 나라의 현재 점수 상황과 두 경기에서 골을 넣은 팀이 시간 순서대로 주어졌을 때, 동호가 계산한 각각의 상황마다 동호가 눈물을 흘리고 있는지, 아니면 불행한 상태로 있는지 출력하시오.</p>

### 입력 

 <p>첫 번째 줄에 한국 팀의 득점, 실점, 승점이 공백을 사이에 두고 순서대로 주어진다.</p>

<p>두 번째 줄에 우루과이 팀의 득점, 실점, 승점이 공백을 사이에 두고 순서대로 주어진다.</p>

<p>세 번째 줄에 가나 팀의 득점, 실점, 승점이 공백을 사이에 두고 순서대로 주어진다.</p>

<p>네 번째 줄에 포르투갈 팀의 득점, 실점, 승점이 공백을 사이에 두고 순서대로 주어진다.</p>

<p>다섯 번째 줄에 마지막 두 경기 도중에 일어난 골의 횟수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다.</p>

<p><mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2265"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi><mo>≥</mo><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N \ge 1$</span></mjx-container> 인 경우 여섯 번째 줄부터 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="3"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi><mo>+</mo><mn>5</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N+5$</span></mjx-container> 번째 줄까지 각 줄마다 골을 넣은 팀의 이름이 주어진다. 한국 팀이 골을 넣었을 경우 <code>korea</code>, 가나 팀이 골을 넣었을 경우 <code>ghana</code>, 포르투갈 팀이 골을 넣었을 경우 <code>portugal</code>, 우루과이 팀이 골을 넣었을 경우 <code>uruguay</code>가 주어진다.</p>

### 출력 

 <p>첫 번째 줄에 최초 상황에서 동호의 상태를 출력한다. 동호가 눈물을 흘리면 <code>cry</code>, 불행하면 <code>unhappy</code>를 출력한다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2265"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi><mo>≥</mo><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N \ge 1$</span></mjx-container>인 경우 둘째 줄부터 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="3"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi><mo>+</mo><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N+1$</span></mjx-container>번째 줄까지 각 줄마다 골이 발생한 이후 동호의 상태를 순서대로 출력한다.</p>

