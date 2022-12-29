# [Platinum I] Crazy Bits - 6267 

[문제 링크](https://www.acmicpc.net/problem/6267) 

### 성능 요약

메모리: 5892 KB, 시간: 100 ms

### 분류

비트마스킹(bitmask), 최대 유량(flow), 최소 비용 최대 유량(mcmf)

### 문제 설명

<p>Olandicans have invented a strange computer; it has only 12-bit registers to store numbers. And the only command that this computer accepts is SWAP. The Swap function is called with 3 parameters i, j, and d. A call of swap(i, j, d) swaps the jth bit of the ith register with its neighboring bit in direction d (0: up, 1: right, 2: down, 3: left). For example, swap (2, 3, 1) swaps the 3rd and the 4th bits of the 2nd register and Swap(6, 4, 2) swaps the 4th bits of the 6th and the 7th registers. Olandicans know the initial values of the registers and they want to change them to some other numbers. They asked you to help them find the minimum number of swap calls.</p>

### 입력 

 <p>The input consists of multiple test cases. The first line of each test case is n (1 ≤ n ≤ 16), the number of registers. The next line contains n integers, where the ith number is the initial value of the ith register. The next line contains n integers, where the ith number is the desired value of the ith register. The input is terminated by a line containing a zero.</p>

### 출력 

 <p>For each test case, you should write a single line containing the minimum number of swaps needed for that test case. If it is not possible, write "Impossible".</p>

