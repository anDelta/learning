// 158A - Next Round
// https://codeforces.com/problemset/problem/158/A
// Tags: implementation, *special problem
// Difficulty: *800

int[] n_k = Console.ReadLine()!.Split(' ').Select(int.Parse).ToArray();
int[] contest = Console.ReadLine()!.Split(' ').Select(int.Parse).ToArray();
int count = contest.Count(n => n >= contest[n_k[1] - 1] && n != 0);
Console.WriteLine(count);
