using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace testebasico
{
    class Program
    {
        static void Main(string[] args)
        {
            int peso = 57, sapato = 44, idade = 18;
            double altura = 1.85;
            dynamic nome = "Gabriel";
            Console.WriteLine($"Minha idade é {idade} anos. Calço {sapato}, e peso {peso} kilos. \nMeu nome é {nome} e minha altura é {altura}");
            Console.ReadLine();
        }
    }
}
