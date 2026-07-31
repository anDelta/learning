// 263A - Beautiful matrix
// https://codeforces.com/problemset/problem/263/A
// Tags: implementation
// Difficulty: *800

int[][] mat = new int[5][];
for(int i = 0; i < 5; i++)
{
    mat[i] = Console.ReadLine()!.Split(' ').Select(int.Parse).ToArray();
}

int posI = -1, posJ = -1;
for(int i = 0; i < mat.Length; i++)
{
    for(int j = 0; j < mat[i].Length; j++)
    {
        if(mat[i][j] != 0)
        {
            posI = i;
            posJ = j;
            break;
        }
    }
}

posI = Math.Abs(posI - 2);
posJ = Math.Abs(posJ - 2);
Console.WriteLine(posI + posJ);