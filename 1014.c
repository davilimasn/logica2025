using System;
using System.Globalization;

class Program
{
    static void Main()
    {
        int distancia = int.Parse(Console.ReadLine());
        double combustivel = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

        double consumoMedio = distancia / combustivel;

        Console.WriteLine(consumoMedio.ToString("F3", CultureInfo.InvariantCulture) + " km/l");
    }
}
