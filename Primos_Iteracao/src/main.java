

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author thiago
 */
public class main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        double[] tempos = new double[3];
        
        calculos primo100 = new calculos(100000);
        System.out.println("Primos com for\n");
        double tempoInicio = System.currentTimeMillis();
        primo100.calcula_primos_for();
        tempos[0] = (System.currentTimeMillis()-tempoInicio)/1000;
        System.out.println("Tempo Total: "+(System.currentTimeMillis()-tempoInicio)/1000 + " Segundos\n");
        
        System.out.println("Primos com While\n");
        
        tempoInicio = System.currentTimeMillis();
        primo100.calcula_primos_while();
        tempos[1] = (System.currentTimeMillis()-tempoInicio)/1000;
        System.out.println("Tempo Total: "+(System.currentTimeMillis()-tempoInicio)/1000 + " Segundos\n");
        
        System.out.println("Primos com DoWhile\n");
        tempoInicio = System.currentTimeMillis();
        primo100.calcula_primos_dowhile();
        tempos[2] = (System.currentTimeMillis()-tempoInicio)/1000;
        System.out.println("Tempo Total: "+(System.currentTimeMillis()-tempoInicio)/1000 + " Segundos\n");
        
        for(int i = 0; i < 3; i++)
            System.out.println(tempos[i]);
    }
    
}
