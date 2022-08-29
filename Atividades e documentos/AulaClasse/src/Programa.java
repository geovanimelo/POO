
public class Programa {

	public static void main(String[] args) {
		Aluno aluno1 = new Aluno();
		aluno1.nome= "Chico";
        aluno1.np1= 8.8;
		aluno1.freq = 98;
		aluno1.mat= 1234;
		
		Aluno aluno2 = new Aluno();
		aluno2.np1= 10;
		aluno2.np2= 8;
		aluno2.freq= 97;
		aluno2.mat= 1254;
		aluno2.nome= "Maria";
        
		aluno2.exibir();
        
		aluno2.Status();
       
	}

}
