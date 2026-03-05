/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package programaidade;

import java.util.Scanner;
import java.time.LocalDate;

/**
 *
 * @author natal
 */
public class ProgramaIdade {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here       
        Scanner t = new Scanner(System.in);
        LocalDate dataAtual = LocalDate.now();
        int at = dataAtual.getYear();
        
        System.out.print("Em que ano você nasceu?  ");
        int nasc = t.nextInt();
        int id = at - nasc;
        System.out.println("Sua idade é " + id);
        
        if (id >= 18){
            System.out.println("Maior de idade");        
        } else {
            System.out.println("Menor de idade");
        }
    }   
}
