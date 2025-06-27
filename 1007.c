using System;

class Program
{
    static void Main()
    {
        int A = int.Parse(Console.ReadLine());
        int B = int.Parse(Console.ReadLine());
        int C = int.Parse(Console.ReadLine());
        int D = int.Parse(Console.ReadLine());

        int DIFERENCA = (A * B - C * D);

        Console.WriteLine("DIFERENCA = " + DIFERENCA);
    }
}
