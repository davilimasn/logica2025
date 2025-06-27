using System;

class Program
{
    static int Maior(int a, int b)
    {
        return (a + b + Math.Abs(a - b)) / 2;
    }

    static void Main()
    {
        string[] valores = Console.ReadLine().Split(' ');
        int a = int.Parse(valores[0]);
        int b = int.Parse(valores[1]);
        int c = int.Parse(valores[2]);

        int maiorAB = Maior(a, b);
        int maiorABC = Maior(maiorAB, c);

        Console.WriteLine(maiorABC + " eh o maior");
    }
}
