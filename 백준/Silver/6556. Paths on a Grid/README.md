# [Silver IV] Paths on a Grid - 6556 

[문제 링크](https://www.acmicpc.net/problem/6556) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

조합론(combinatorics), 수학(math)

### 문제 설명

<p>Imagine you are attending your math lesson at school. Once again, you are bored because your teacher tells things that you already mastered years ago (this time he's explaining that <em>(a+b)<sup>2</sup>=a<sup>2</sup>+2ab+b<sup>2</sup></em>). So you decide to waste your time with drawing modern art instead.</p>

<p>Fortunately you have a piece of squared paper and you choose a rectangle of size <em>n×m</em> on the paper. Let's call this rectangle together with the lines it contains a grid. Starting at the lower left corner of the grid, you move your pencil to the upper right corner, taking care that it stays on the lines and moves only to the right or up. The result is shown on the left:</p>

<p style="text-align:center"><img src="https://www.acmicpc.net/upload/images2/grid.gif"></p>

<p>Really a masterpiece, isn't it? Repeating the procedure one more time, you arrive with the picture shown on the right. Now you wonder: how many different works of art can you produce?</p>

### 입력 

 <p>The input contains several testcases. Each is specified by two unsigned 32-bit integers <em>n</em> and <em>m</em>, denoting the size of the rectangle. As you can observe, the number of lines of the corresponding grid is one more in each dimension. Input is terminated by <em>n=m=0</em>.</p>

### 출력 

 <p>For each test case output on a line the number of different art works that can be generated using the procedure described above. That is, how many paths are there on a grid where each step of the path consists of moving one unit to the right or one unit up? You may safely assume that this number fits into a 32-bit unsigned integer.</p>

