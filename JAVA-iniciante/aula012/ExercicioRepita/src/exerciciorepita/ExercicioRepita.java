/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exerciciorepita;

import javax.swing.JOptionPane;

/**
 *
 * @author natal
 */
public class ExercicioRepita {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int n, s = 0, totV = 0,totP = 0, totI = 0, mais100 = 0;
        float m;
                
        do{
           n = Integer.parseInt(JOptionPane.showInputDialog(null, "<html>Informe um número: <br><em>(valor 0 interrompe)</em></html>"));
           s += n;
           
           if(n % 2 == 0){ //Teste: par ou ímpar
               totP++;
           }else{
               totI++;
           }
           
           if(n > 100){    //Teste: maior que 100
               mais100++;
           }
           
        }while(n != 0);
        m = s/totV;
        
        //Resultados
        JOptionPane.showMessageDialog(null, "<html>Resultado final <br><hr>-----------------" +
                "<br>Total de Valores: " + totV +
                "<br>Total de Pares: " + totP +
                "<br>Total de Impares: " + totI +
                "<br>Acima de 100: " + mais100 +
                "<br>Média de valores: " + m + "</html>");
    }    
}   
