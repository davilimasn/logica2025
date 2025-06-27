using System;
using System.Globalization;

class Program
{
    static void Main()
    {
        string[] valores = Console.ReadLine().Split(' ');
        double A = double.Parse(valores[0], CultureInfo.InvariantCulture);
        double B = double.Parse(valores[1], CultureInfo.InvariantCulture);
        double C = double.Parse(valores[2], CultureInfo.InvariantCulture);

        double pi = 3.14159;

        double areaTriangulo = (A * C) / 2.0;
        double areaCirculo = pi * C * C;
        double areaTrapezio = ((A + B) * C) / 2.0;
        double areaQuadrado = B * B;
        double areaRetangulo = A * B;

        Console.WriteLine("TRIANGULO: " + areaTriangulo.ToString("F3", CultureInfo.InvariantCulture));
        Console.WriteLine("CIRCULO: " + areaCirculo.ToString("F3", CultureInfo.InvariantCulture));
        Console.WriteLine("TRAPEZIO: " + areaTrapezio.ToString("F3", CultureInfo.InvariantCulture));
        Console.WriteLine("QUADRADO: " + areaQuadrado.ToString("F3", CultureInfo.InvariantCulture));
        Console.WriteLine("RETANGULO: " + areaRetangulo.ToString("F3", CultureInfo.InvariantCulture));
    }
}
