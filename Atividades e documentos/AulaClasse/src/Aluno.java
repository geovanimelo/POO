
public class Aluno {
		String nome;
		double np1,np2, freq;
		int mat;
		
		double mediaFinal()
		{
			double media = (np1 + np2)/2;
					return media;
		}
		
		void exibir()
		{
			System.out.println("Nome:" + nome);
			System.out.println("Mat:" + mat);
			System.out.println("Np1:" + np1);
			System.out.println("Np2:" + np2);
			System.out.println("Frequencia:" + freq);
		}
		
		void Status()   //Não precisou passar como parametros porque media e freq já fazem parte da classe.
		{
			double media= mediaFinal(); 
			
			if(media>=8 && freq >= 75)
			{
				System.out.println("Aprovado!");
				
			}else if(media>=4 && freq >= 75)
			{	
				System.out.println("Final!");
				
		    }else
		    {
		    	System.out.println("Reprovado!");
		    	
		    }

      }
}