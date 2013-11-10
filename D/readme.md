题目：Problem D: 小明的游戏
-----------
Time Limit: 1 Sec  Memory Limit: 128 MB

题目描述：
-----------
小明是一个喜欢思考的少年，同时他又有点犯二，一犯二就会进入精神分裂状态，所以他非常喜欢2这个数字。有一天小明爱上了nim游戏，那是一种取石子的游戏，但是小明觉得自己那么2，所以只能取2的幂次的石子数。所以游戏的定义如下：有N堆石子，每堆数量为Ai，小明和他的精神分裂体依次采取行动，每次可以从某一堆选择1,2,4,8,...2^k的石子拿走，然后依次轮换，如果一个人行动完后已经没有石子，那么他就获胜。现在小明想知道，自己是先手的话，是不是无论如何都可以赢掉另一个自己。假设小明和小明的第二形态都是无比聪明的少年。

输入：
-----------
总共有T(T<=100)组测试数据 在第一行中给出 接下来有T个模块 每个模块开始有一个整数N(1<=N<=10000)表示堆数，接下来N行，每行有一个整数Ai(1<=Ai<=10^9)，表示石子数。

输出：
-----------
输出结果共有T行，每行输出yes表示小明先手必胜，no表示必败。

样例输入：
-----------
3  
2  
1  
3  
3  
2  
4  
6  
2  
1  
1  

样例输出：
-----------
yes  
yes  
no  

来源：
-----------
http://acm.hust.edu.cn/problem.php?cid=1107&pid=3

答疑：
-----------