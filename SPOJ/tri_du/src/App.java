import java.util.Scanner;

class App {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);
		
		int c1 = scanner.nextInt();
		int c2 = scanner.nextInt();
		int c3;
		
		if (c1 == c2 || c1 > c2) {
		    c3 = c1;
		}
		else {
		    c3 = c2;
		}
		System.out.println(c3);
    }
}
