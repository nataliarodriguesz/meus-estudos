/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package vetor02;

import java.time.LocalDate;

/**
 *
 * @author natal
 */
public class Vetor02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        LocalDate anoAtual = LocalDate.now();
        int at = anoAtual.getYear();
        String mes[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho",
        "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
        int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if(at%4 == 0){
          dias[2] = 29;    
        }
        
        for(int c = 0; c < mes.length; c++){
            System.out.println("O mês de " + mes[c] + " tem " + dias[c] + " dias");    
        }
    }
    
}
