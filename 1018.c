using System;

class Program
{
    static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        Console.WriteLine(N);

        int[] notas = { 100, 50, 20, 10, 5, 2, 1 };
        int restante = N;

        foreach (int nota in notas)
        {
            int qtd = restante / nota;
            restante = restante % nota;
            Console.WriteLine($"{qtd} nota(s) de R$ {nota},00");
        }
    }
}
