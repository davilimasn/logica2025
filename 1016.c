using System;

class Program
{
    static void Main()
    {
        int distancia = int.Parse(Console.ReadLine());

        // Carro Y ganha 1 km a cada 2 minutos sobre o carro X
        int tempo = distancia * 2;

        Console.WriteLine(tempo + " minutos");
    }
}
