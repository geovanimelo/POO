
public class Conta {
	private double Saldo;
	private String numConta;
	
	Conta(){
		Saldo=0;
	}
	
	Conta(double Saldo)
	{
		this.Saldo = Saldo;
	}
	
	Conta(String numConta, double Saldo)
	{
	this.numConta = numConta; 
	this.Saldo = Saldo; //Saldo(Atributo) recebe como valor Saldo(parametro de Entrada).
	}
	
	public double Sacar(double valor)
	{
		if(valor > 0 && valor <=Saldo){
		 System.out.println("Saldo:"+Saldo);
		 
			Saldo = Saldo - valor;
			System.out.println("Saldo Atual:"+Saldo);
			 
		
		}else
		{
			System.out.println("Valor inválido!");
				
		}
		
		return Saldo;
		
	
	}
	
	public double Depositar(double valor)
	{
		if(valor > 0 && valor<=Saldo){
		 System.out.println("Saldo:"+Saldo);
		 
			Saldo = Saldo - valor;
			System.out.println("Saldo Atual:"+Saldo);
			 
		
		}else
		{
			System.out.println("Valor inválido!");
				
		}
		
		return Saldo;
		
	
	}
	public void Tranferir(double valor, Conta dest)
	{
	Sacar(valor);
    Depositar(valor);
	
	}
}
