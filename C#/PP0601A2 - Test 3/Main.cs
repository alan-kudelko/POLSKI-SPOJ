using System;

public class PP0601A2{
	static void Main(string[] args){
		int obecna;
		int poprzednia1=42;
		int licznik=0;
		
		do{
			obecna=Convert.ToInt32(Console.ReadLine());
			if((poprzednia1!=42)&&(obecna==42)){
				licznik++;
			}
			Console.WriteLine(obecna);
			poprzednia1=obecna;
				
		}while(licznik<3);
	}
}