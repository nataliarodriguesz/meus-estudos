/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package programapernas;

import java.util.Scanner;

/**
 *
 * @author natal
 */
public class ProgramaPernas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner teclado = new Scanner(System.in);
        System.out.print("Quantas pernas?  ");      
        int pernas = teclado.nextInt();
        
        String tipo;
    
        //Múltipla escolha
        switch(pernas){
            case 1:
                tipo = "Saci";
                break;
            case 2:
                tipo = "Bípede";
                break;
            case 4, 6:
                tipo = "Aranha";
                break;
            default:
                tipo = "ET";
        }
        System.out.println("Isso é um(a) " + tipo);
        
    }
    
}
