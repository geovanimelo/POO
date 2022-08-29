import java.util.Scanner;

public class main {

	public static void main(String[] args) {

		ContaBancaria conta = new ContaBancaria();

		conta.setConta("1234-0");
		conta.setAgencia("144-2");
		conta.setSaldo(4500);

		Scanner scanner = new Scanner(System.in);

		double op, valor;

		do {
			System.out.printf("\n***Opção inválida!***");
			System.out.println("\n\n1-Sacar\n2-Depositar\n");
			System.out.println("Selecione:");
			op = scanner.nextDouble();
		} while (op< 1 || op > 2);

		do {
			System.out.println("\nDigite o valor:");

			valor = scanner.nextDouble();
		} while (valor <= 0);

		if (op == 1) {
			conta.Sacar(valor);
		} else {
			conta.Depositar(valor);
		}
	}

}
