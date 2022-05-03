# [Bronze III] Centroid of Point Masses - 9945 

[문제 링크](https://www.acmicpc.net/problem/9945) 

### 성능 요약

메모리: 2020 KB, 시간: 4 ms

### 분류

사칙연산(arithmetic), 수학(math)

### 문제 설명

<p>The “centroid” of a region in two dimensions can be thought of as the point at which the region would balance on the end of a pencil. Computing this would require a bit more effort than we have in mind for this problem, so we restrict our attention to finding the centroid of a collection of point masses.</p>

<p>In this case, we could view the plane as being a thin, massless sheet with a few heavy points on it and ask where the plane would balance. To be more rigorous, we present a mathematical definition of the centroid for this case.</p>

<p>Given the coordinates (x<sub>i</sub>, y<sub>i</sub>) of a set of n points and the mass mi at each point, we define the x-moment of that set of points relative to a given point (a, b) as follows (note the x-moment is defined in terms of y differences, but we will need both moments, so it doesn’t really matter which way this is done for this particular problem)</p>

<p>\[M_x = \sum_{i=1}^{n} {m_i(b-y_i)}\]</p>

<p>Similarly, the y-moment is defined as</p>

<p>\[M_y = \sum_{i=1}^{n} {m_i(a-x_i)}\]</p>

<p>The centroid of that set of points is defined to be the point (a, b) for which both moments are zero.</p>

### 입력 

 <p>Input will be sets of points. Each set will be specified by the number of points n in the set followed by n lines of three numbers representing x<sub>i</sub>, y<sub>i</sub>, and m<sub>i</sub> values for i = 1 to n. All these numbers will be integers from 1 to 5000. That is, n will be from 1 to 5000 and all the coordinates and masses will also be from 0 to 5000, just to make input easier. End of input will be marked by a negative value of n. There will be extra white space in input so that judges can read the input cases easily. Do not assume any particular number of spaces before, between, or after the input values, and do not assume a particular number of blank lines between cases.</p>

### 출력 

 <p>Print the coordinates of the centroid. Follow the format exactly: “Case”, a space, the case number, a colon and one space, and the values of a and b rounded to two decimal places separated by one space. Input will be constructed so that rounding will not cause problems for values that are sufficiently close to correct. Do not print any trailing spaces.</p>

