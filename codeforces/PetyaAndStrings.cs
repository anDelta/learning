// 112A - Petya and Strings
// https://codeforces.com/problemset/problem/112/A
// Tags: implementation, strings
// Difficulty: *800

string s1 = Console.ReadLine()!.ToLower();
string s2 = Console.ReadLine()!.ToLower();

for(int i = 0; i < s1.Length; i++)
{
    if (s1[i] != s2[i])
    {
        Console.WriteLine(s1[i] < s2[i] ? -1 : 1);
        return;
    }
}

Console.WriteLine(0);