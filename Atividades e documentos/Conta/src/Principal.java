
public class Principal {

	public static void main(String[] args) {
		
		Matematica m = new Matematica();
		System.out.println(m.somar(15, 5));
		System.out.println(m.somar(15, 5, 3));
		System.out.println(m.somar(15, 5, 3, 2));
		
		Conta c = new Conta("1234-4", 589.7);
		//c.exibir();
	}

}
