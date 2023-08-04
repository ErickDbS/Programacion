package com.mycompany.conversionromanos;

import java.util.Scanner;

public class ConversionRomanos {

    public static void main(String[] args) {
        int numero;
        int miles=0,centenas=0,decenas=0,unidades=0;
        String resultado = "";
        
        System.out.println("Ingrese un numero de entre 1000 a 2000");
        Scanner sc = new Scanner(System.in);
        numero = sc.nextInt();
        
        if ((numero < 1000) || (numero > 2000)){
            System.out.println("numero invalido");
        }else if ((numero >= 1000) && (numero == 2000)){
            miles = numero / 1000;
            centenas = numero / 100 % 10;
            decenas = numero / 10 % 10;
            unidades = numero % 10;
            
            //Conversion de miles
            for(int i=1; i<=miles; i++){
                resultado = resultado + "M";
            }
                
            //Conversion de centenas
            if(centenas == 9){
                resultado = resultado + "CM";
            } else if (centenas >= 5) {
                 resultado = resultado + "D";
                 for (int i = 6; i <= centenas; i++) {
                      resultado = resultado + "C";
                    }
            } else if (centenas == 4) {
                      resultado = resultado + "CD";
            } else {
                  for (int i = 1; i <= centenas; i++) {
                      resultado = resultado + "C";
                    }
            }

      //Convercion decenas
      if (decenas == 9) {
          resultado = resultado + "XC";
      } else if (decenas >= 5) {
                 resultado = resultado + "L";
                 for (int i = 6; i <= decenas; i++) {
                      resultado = resultado + "X";
                 }
      } else if (decenas == 4) {
                 resultado = resultado + "XL";
      } else {
                 for (int i = 1; i <= decenas; i++) {
                      resultado = resultado + "X";
                 }
      }

      //Convercion unidades
      if (unidades == 9) {
          resultado = resultado + "IX";
      } else if (unidades >= 5) {
                 resultado = resultado + "V";
                 for (int i = 6; i <= unidades; i++) {                                                           
                      resultado = resultado + "I";
                 }
      } else if (unidades == 4) {
                 resultado = resultado + "IV";
      } else {
                 for (int i = 1; i <= unidades; i++) {
                      resultado = resultado + "I";
                 }
      }
      
      
      System.out.println("El año " + numero +  " en numeros romanos es: " + resultado);
    }
  }         
}
