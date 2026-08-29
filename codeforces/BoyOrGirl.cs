// 236A - Boy or Girl
// https://codeforces.com/problemset/problem/236/A
// Tags: implementation, strings, brute force
// Difficulty: *800

string s = Console.ReadLine()!;
int distinct = s.Distinct().Count();
Console.WriteLine(distinct % 2 == 0? "CHAT WITH HER!" : "IGNORE HIM!");