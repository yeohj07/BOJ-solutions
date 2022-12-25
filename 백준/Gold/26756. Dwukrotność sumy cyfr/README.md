# [Gold V] Dwukrotność sumy cyfr - 26756 

[문제 링크](https://www.acmicpc.net/problem/26756) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

수학(math), 비둘기집 원리(pigeonhole_principle)

### 문제 설명

<p>Bajtazar wymyśla ciąg liczb naturalnych: rozpoczyna od swojej ulubionej liczby X (czyli pierwszy wyraz ciągu A<sub>1</sub> = X), natomiast każda kolejna liczba w ciągu to dwukrotność sumy cyfr poprzedniej (czyli dla każdego i ≥ 1 zachodzi A<sub>i+1</sub> = 2 · s(A<sub>i</sub>), gdzie s(k) oznacza sumę cyfr k). Na przykład, jeśli X = 1, to pierwszymi wyrazami tego będą A<sub>1</sub> = 1, A<sub>2</sub> = 2, A<sub>3</sub> = 4, A<sub>4</sub> = 8, A<sub>5</sub> = 16, A<sub>6</sub> = 14, . . . .</p>

<p>Czy potrafisz szybko wyznaczyć N-ty wyraz ciągu? Napisz program, który wczyta wartości N oraz X, po czym wyznaczy N-ty wyraz ciągu Bajtazara rozpoczynającego się od X.</p>

### 입력 

 <p>W pierwszym (jedynym) wierszu wejścia znajdują się dwie liczby naturalne N oraz X (1 ≤ N, X ≤ 10<sup>18</sup>).</p>

### 출력 

 <p>Twój program powinien wypisać na wyjście jedną liczbę całkowitą: N-ty wyraz ciągu Bajtazara, czyli element A<sub>N</sub>.</p>

