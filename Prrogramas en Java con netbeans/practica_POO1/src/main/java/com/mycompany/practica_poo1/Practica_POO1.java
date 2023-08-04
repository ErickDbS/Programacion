package com.mycompany.practica_poo1;

import java.util.Scanner;
public class Practica_POO1 {

    public static void main(String[] args) {
       int segundos, minutos=0, horas=0;
       
       System.out.println("Ingrese una cantidad");
       Scanner sc = new Scanner(System.in);
       segundos = sc.nextInt();
       
       //Convercion de horas
       if (segundos >= 3600) 
           horas = segundos/3600;
           segundos = segundos - (horas*3600);
        
        //Convercion de minutos   
        if (segundos >= 60)
            minutos = segundos/60;
            segundos = segundos - (minutos*60);
            
        System.out.println("Cantidad convertida a horas, minutos y segundos " + horas + ":"+ minutos + ":"+ segundos);
 
    }
}
