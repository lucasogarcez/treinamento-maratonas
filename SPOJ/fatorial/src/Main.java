import java.util.*;
import java.lang.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		int cont = 0, fatorial = 0;
		
		int vet[] = {1,2,6,24,120,720,5040,40320};
		
		for (int i = 7; i >= 0; i--) {
		    while (n >= vet[i]) {
                n -= vet[i];
                cont++;
		    }
		}
		
		System.out.println(cont);
	}
}