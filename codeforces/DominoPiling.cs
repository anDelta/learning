// 50A - Domino piling
// https://codeforces.com/problemset/problem/50/A
// Tags: greedy, math 
// Difficulty: *800

int[] m_n = Console.ReadLine()!.Split(' ').Select(int.Parse).ToArray();
int area = m_n[0] * m_n[1], pieces = area / 2;
Console.WriteLine(pieces);