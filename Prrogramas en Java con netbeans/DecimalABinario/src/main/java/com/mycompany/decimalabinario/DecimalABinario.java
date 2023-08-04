package com.mycompany.decimalabinario;

import java.util.Scanner;

public class DecimalABinario {

    public static void main(String[] args) {
        
        // Variables que utilizaremos
        int decimal, numero, exp, digito;
        double binario;
        Scanner sc = new Scanner(System.in);
        
        // Ciclo que se repite mientras que el usuario no ingrese un valor valido
        do{ 
            System.out.print("Introduce un numero entero >= 0: ");                                                
            decimal = sc.nextInt();
        }while(decimal < 0);
        
        numero = decimal;
        exp=0;
        binario=0;
        // Ciclo para convertir el decimal a binario
        while(decimal!=0){
            // Guardamos el residuo de la operacion decimal % 2 en la variable bianrio
                digito = decimal % 2;           
                // Con el metodo math.pow() elevamos el 10 a lo que vale la variable exp y despues se suma a binario 
                binario = binario + digito * Math.pow(10, exp);                                                   
                exp++;
                // Dividimps la variable decimal entre 2 para seguir con el programa correctamente
                decimal = decimal/2;
        }
        System.out.println("El numero decimal: "+ numero + "convertido a bianrio es: "+ binario);
    }
}
