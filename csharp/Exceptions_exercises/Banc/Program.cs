using Banc.Entities;
using Banc.Entities.Exceptions;
using System.Globalization;

namespace Banc
{
    internal class Program
    {
        static void Main(string[] args)
        {
            try
            {
                Console.WriteLine("Enter account data");
                Console.Write("Number: ");
                int number = int.Parse(Console.ReadLine()!);
                Console.Write("Holder: ");
                string holder = Console.ReadLine()!;
                Console.Write("Initial balance: ");
                double amount = double.Parse(Console.ReadLine()!, CultureInfo.InvariantCulture);    
                Console.Write("Withdraw limit: ");
                double withdrawLimit = double.Parse(Console.ReadLine()!, CultureInfo.InvariantCulture);
                Console.WriteLine();

                Account account = new Account(number, holder, withdrawLimit);
                account.Deposit(amount);
                Console.Write("Enter amount for withdraw: ");
                amount = double.Parse(Console.ReadLine()!, CultureInfo.InvariantCulture);

                account.Withdraw(amount);
                Console.WriteLine("New balance: " + account.Balance.ToString("F2", CultureInfo.InvariantCulture));
            }
            catch(DomainException e)
            {
                Console.WriteLine(e.Message);
            }
            catch(FormatException e)
            {
                Console.WriteLine(e.Message);
            }

        }
    }
}
