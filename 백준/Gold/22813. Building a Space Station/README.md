# [Gold III] Building a Space Station - 22813 

[문제 링크](https://www.acmicpc.net/problem/22813) 

### 성능 요약

메모리: 2552 KB, 시간: 4 ms

### 분류

기하학(geometry), 3차원 기하학(geometry_3d), 그래프 이론(graphs), 최소 스패닝 트리(mst)

### 문제 설명

<p>You are a member of the space station engineering team, and are assigned a task in the construction process of the station. You are expected to write a computer program to complete the task.</p>

<p>The space station is made up with a number of units, called <i>cells.</i> All cells are sphere-shaped, but their sizes are not necessarily uniform. Each cell is fixed at its predetermined position shortly after the station is successfully put into its orbit. It is quite strange that two cells may be touching each other, or even may be overlapping. In an extreme case, a cell may be totally enclosing another one. I do not know how such arrangements are possible.</p>

<p>All the cells must be connected, since crew members should be able to walk from any cell to any other cell. They can walk from a cell A to another cell B, if, (1) A and B are touching each other or overlapping, (2) A and B are connected by a `corridor', or (3) there is a cell C such that walking from A to C, and also from B to C are both possible. Note that the condition (3) should be interpreted transitively.</p>

<p>You are expected to design a configuration, namely, which pairs of cells are to be connected with corridors. There is some freedom in the corridor configuration. For example, if there are three cells A, B and C, not touching nor overlapping each other, at least three plans are possible in order to connect all three cells. The first is to build corridors A-B and A-C, the second B-C and B-A, the third C-A and C-B. The cost of building a corridor is proportional to its length. Therefore, you should choose a plan with the shortest total length of the corridors.</p>

<p>You can ignore the width of a corridor. A corridor is built between points on two cells' surfaces. It can be made arbitrarily long, but of course the shortest one is chosen. Even if two corridors A-B and C-D intersect in space, they are not considered to form a connection path between (for example) A and C. In other words, you may consider that two corridors never intersect.</p>

### 입력 

 <p>The input consists of multiple data sets. Each data set is given in the following format.</p>

<pre><i>n</i>
<i>x</i><sub>1</sub> <i>y</i><sub>1</sub> <i>z</i><sub>1</sub> <i>r</i><sub>1</sub>
<i>x</i><sub>2</sub> <i>y</i><sub>2</sub> <i>z</i><sub>2</sub> <i>r</i><sub>2</sub>
...
<i>x</i><sub><i>n</i></sub> <i>y</i><sub><i>n</i></sub> <i>z</i><sub><i>n</i></sub> <i>r</i><sub><i>n</i></sub>
</pre>

<p>The first line of a data set contains an integer <i>n</i>, which is the number of cells. <i>n</i> is positive, and does not exceed 100.</p>

<p>The following <i>n</i> lines are descriptions of cells. Four values in a line are <i>x-</i>, <i>y-</i> and <i>z-</i>coordinates of the center, and radius (called <i>r</i> in the rest of the problem) of the sphere, in this order. Each value is given by a decimal fraction, with 3 digits after the decimal point. Values are separated by a space character.</p>

<p>Each of <i>x</i>, <i>y</i>, <i>z</i> and <i>r</i> is positive and is less than 100.0.</p>

<p>The end of the input is indicated by a line containing a zero.</p>

### 출력 

 <p>For each data set, the shortest total length of the corridors should be printed, each in a separate line. The printed values should have 3 digits after the decimal point. They may not have an error greater than 0.001.</p>

<p>Note that if no corridors are necessary, that is, if all the cells are connected without corridors, the shortest total length of the corridors is 0.000.</p>

