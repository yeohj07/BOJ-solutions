# [Silver V] Safecracker - 4647 

[문제 링크](https://www.acmicpc.net/problem/4647) 

### 성능 요약

메모리: 2032 KB, 시간: 8 ms

### 분류

브루트포스 알고리즘(bruteforcing), 구현(implementation)

### 문제 설명

<p><code>=== Op tech briefing, 2002/11/02 06:42 CST ===</code></p>

<p>"The item is locked in a Klein safe behind a painting in the second-floor library. Klein safes are extremely rare; most of them, along with Klein and his factory, were destroyed in World War II. Fortunately old Brumbaugh from research knew Klein's secrets and wrote them down before he died. A Klein safe has two distinguishing features: a combination lock that uses letters instead of numbers, and an engraved quotation on the door. A Klein quotation always contains between five and twelve distinct uppercase letters, usually at the beginning of sentences, and mentions one or more numbers. Five of the uppercase letters form the combination that opens the safe. By combining the digits from all the numbers in the appropriate way you get a numeric target. (The details of constructing the target number are classified.) To find the combination you must select five letters v, w, x, y, and z that satisfy the following equation, where each letter is replaced by its ordinal position in the alphabet (A=1, B=2, ..., Z=26). The combination is then vwxyz. If there is more than one solution then the combination is the one that is lexicographically greatest, i.e., the one that would appear last in a dictionary."</p>

<p style="text-align: center;">v - w<sup>2</sup> + x<sup>3</sup> - y<sup>4</sup> + z<sup>5</sup> = target</p>

<p>"For example, given target 1 and letter set ABCDEFGHIJKL, one possible solution is FIECB, since 6 - 9<sup>2</sup> + 5<sup>3</sup> - 3<sup>4</sup> + 2<sup>5</sup> = 1. There are actually several solutions in this case, and the combination turns out to be LKEBA. Klein thought it was safe to encode the combination within the engraving, because it could take months of effort to try all the possibilities even if you knew the secret. But of course computers didn't exist then."</p>

<p><code>=== Op tech directive, computer division, 2002/11/02 12:30 CST ===</code></p>

### 입력 

 <p>"Develop a program to find Klein combinations in preparation for field deployment. Use standard test methodology as per departmental regulations. Input consists of one or more lines containing a positive integer target less than twelve million, a space, then at least five and at most twelve distinct uppercase letters. The last line will contain a target of zero and the letters END; this signals the end of the input.</p>

### 출력 

 <p>For each line output the unique Klein combination, or 'no solution' if there is no correct combination. Use the exact format shown below."</p>

