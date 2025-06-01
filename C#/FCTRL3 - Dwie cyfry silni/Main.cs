using System;

public class FCTRL3{
    static void Main(string[] args){
        int testow;
        long liczba;
        
        testow=Convert.ToInt32(Console.ReadLine());
        for(int i=0;i<testow;i++){
            liczba=Convert.ToInt64(Console.ReadLine());
            
            switch(liczba){
                case 0:
                case 1:
                Console.WriteLine("0 1");
                break;
                case 2:
                Console.WriteLine("0 2");
                break;
                case 3:
                Console.WriteLine("0 6");
                break;
                case 4:
                Console.WriteLine("2 4");
                break;
                case 5:
                case 6:
                case 8:
                Console.WriteLine("2 0");
                break;
                case 7:
                Console.WriteLine("4 0");
                break;
                case 9:
                Console.WriteLine("8 0");
                break;
                default:
                Console.WriteLine("0 0");
                break;
            }
        }
    }
}
