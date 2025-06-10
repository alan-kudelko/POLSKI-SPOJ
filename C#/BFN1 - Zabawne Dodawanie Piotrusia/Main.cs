using System;

public class BFN1{
    static void Main(string[] args){
		int testow;
		int suma=0;
		int j=0;
		String a;
		
		testow=Convert.ToInt32(Console.ReadLine());
        for(int i=0;i<testow;i++){
			a=Console.ReadLine();
			if(Convert.ToInt32(a)%11==0){
				Console.WriteLine("{0} 0",a);
				continue;
			}
			Char[]reversed=a.ToCharArray();
			Array.Reverse(reversed);
			String reversedA=new string(reversed);
			for(j=0;a!=reversedA;j++){
				suma+=Convert.ToInt32(a);
				suma+=Convert.ToInt32(reversedA);
				
				a=suma.ToString();
				reversed=a.ToCharArray();
				Array.Reverse(reversed);
				reversedA=new string(reversed);
				suma=0;
			}
			Console.WriteLine("{0} {1}",a,j);
		}
    }
}
