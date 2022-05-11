# [Bronze I] Tennis - 7597 

[문제 링크](https://www.acmicpc.net/problem/7597) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현(implementation), 시뮬레이션(simulation), 문자열(string)

### 문제 설명

<p>Do you follow tennis? If so, you will be aware of the strange scoring system, 15, 30, 40, game. Then, of course there is 40-40 or deuce, with one player having to get 2 points ahead to win a game.</p>

<p>This problem asks you to work out the score of a tennis match given the player who wins each point. To keep things simple, players are called A and B. The points are given as a sequence of letters, where A means a point won by player A, B a point won by player B. Here is an example:</p>

<p>ABAABBAABABAABABBB</p>

<p>Remember, to win a game a player needs to score 4 points, but also to be 2 points ahead. So in the above example, the first game is represented by ABAABBAA and player A has won it. It went to deuce then player A won two points. The second game was represented by BABAABABBB. This game was won by player B. Again it went to deuce, player A went ahead by 1 but player B caught up. Player B then won the last 2 points. After all that, the score would be 1 game all. </p>

### 입력 

 <p>Input will consist of a number of strings of characters, each on a line of its own. No line will contain more than 250 characters. The last line will contain just the # character – this line should not be processed.</p>

<p>Each line represents part of a tennis match, a number of completed games. The line will contain only the upper case letters A and B representing points won by each player. Consider each line as separate, and work out the score, in games, after the points shown. </p>

### 출력 

 <p>Output will be one line for each input line in the form of a score, A x B y where x is the number of games won by A, y is the number of games won by B. </p>

