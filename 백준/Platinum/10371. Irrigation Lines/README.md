# [Platinum III] Irrigation Lines - 10371 

[문제 링크](https://www.acmicpc.net/problem/10371) 

### 성능 요약

메모리: 2156 KB, 시간: 4 ms

### 분류

이분 매칭(bipartite_matching)

### 문제 설명

<p>A plantation consists of several rectangular fields, and a field is further subdivided into square zones. Under the multi-zone crop rotation, some zones are planted with crops, while some other zones are left fallow during a season. The zones of a field are rotated in this manner so that every few seasons, a zone would rest and be fallow. Crops of a season are selected based on their type, form, shape, and sun or shade requirements.</p>

<p>An irrigation system has been installed for each field. The system is constructed in a manner to simplify the operation and re-configuration of the system. The main water line runs around the field, which is depicted by the dark solid lines enclosing the field in the figure shown below. Dedicated control valves connect the mainline to the lateral (horizontal and vertical) irrigation lines that control the water flow to each of the rows and columns of zones. The valves are turned off if the irrigation line is not active. Only one lateral irrigation line is required to water a planting zone. The emitters or the holes on the active irrigation lines are closed over the zones that do not require to be watered. The layout of the planting field dictates the way the irrigation system is re-configured at the beginning of every season by turning off the valves of the inactive irrigation lines, and closing the unwanted emitters of the active lines. </p>

<p><img alt="" src="https://www.acmicpc.net/upload/images2/crap.png" style="float:right; height:222px; width:216px">To economise the management effort, the system needs to utilise a minimum number of lateral irrigation lines, i.e., lines that must be active. For example, the figure below shows a field divided into 4 x 4 zones. There are four zones that are planted with crops in the field marked by floral symbols, i.e., row 1 column 3, row 2 columns 2 and 4, and row 3 column 3. There are eight valves controlling the flow of water through their corresponding irrigation lines on the field. In the example, only the two lines whose valves have been turned on need to be activated to irrigate the crops on the planting zones. These active irrigation lines are outlined by solid lateral lines in the figure. The inactive lines whose valves have been turned off are not drawn to avoid clustering of the figure.</p>

<p>Write a program that reads layouts of planting fields and determines the minimum number of lateral irrigation lines that must be activated in these fields.</p>

### 입력 

 <p>The first line contains an integer T (T ≤ 100) denoting the number of cases. Each case describes a layout of a planting field, which starts on a new line with a pair of positive integers M and N (1 ≤ M, N ≤ 100), indicating the dimension of the field, i.e., the number of rows and columns of zones, respectively. The integers are separated by space. The next M lines of each test case delineate the layout of the field containing either a 1 or a 0, where 1 indicates the zone is planted and a 0 if it is fallow.</p>

### 출력 

 <p>For each case, output “Case #X: Y” (without quotes) in a line where X is the case number, starting from 1, followed by a single space, and Y is the minimum number of irrigation lines that must be active.</p>

