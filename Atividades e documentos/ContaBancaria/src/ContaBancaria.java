import java.util.Scanner;

class ContaBancaria {

	private String numConta;
	private String numAgencia;
	private double Saldo;
	
	
	public String getConta()
	{
		
	    return numConta;
	}
	
	public void setConta(String conta)
	{
		
	    numConta= conta;
	}
	
	public void setAgencia(String agencia)
	{
		
	    numAgencia= agencia;
	}
	
	public String getAgencia()
	{
		
	    return numAgencia;
	}
	
	public void setSaldo(double saldo)
	{
		
	    Saldo= saldo;
	}
	
	public double Sacar(double valor)
	{
		while(valor<=0 || valor>Saldo){
			 Scanner scanner = new Scanner(System.in);
			 
				System.out.printf("\n***Valor inválido!***");
		        System.out.println("\n\nDigite o valor:");
	            valor= scanner.nextDouble();
	            
			} 
			
			System.out.printf("\n*Saldo Anterior:%.2f", Saldo);
			 
			Saldo = Saldo - valor;
			System.out.printf("\n*Saldo Atual:%.2f", Saldo);
			return Saldo;
	
	}
	
	public double Depositar(double valor)
	{
		while(valor<=0 || valor>Saldo){
			 Scanner scanner = new Scanner(System.in);
			 
				System.out.printf("\n***Valor inválido!***");
		        System.out.println("\n\nDigite o valor:");
	            valor= scanner.nextDouble();
	            
			} 
			
			System.out.printf("\n*Saldo Anterior:%.2f", Saldo);
			 
			Saldo = Saldo - valor;
			System.out.printf("\n*Saldo Atual:%.2f", Saldo);
			return Saldo;
	
	}
	
}
