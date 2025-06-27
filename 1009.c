using System;
using System.Globalization;

class Program
{
    static void Main()
    {
        string nome = Console.ReadLine();
        double salarioFixo = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
        double totalVendas = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

        double totalReceber = salarioFixo + (totalVendas * 0.15);

        Console.WriteLine("TOTAL = R$ " + totalReceber.ToString("F2", CultureInfo.InvariantCulture));
    }
}
