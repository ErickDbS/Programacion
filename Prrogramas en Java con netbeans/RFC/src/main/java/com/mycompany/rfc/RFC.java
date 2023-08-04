package com.mycompany.rfc;
import java.util.Scanner;

public class RFC {
    
    public static void RFC (){
       String apeM, apeP, nombre, mes, anio, dia;
       String RFC;
       
       Scanner sc = new Scanner(System.in);
       
       System.out.println("Programa para calcular el RFC sin homoclave");
       
       System.out.println("Ingrese su apellido paterno");
       apeP = sc.nextLine();
       
       System.out.println("Ingrese su apellido materno");
       apeM = sc.nextLine();
       
       System.out.println("Ingrese su nombre");
       nombre = sc.nextLine();
       
       System.out.println("Ingrese su dia de nacimiento");
       dia = sc.nextLine();
       
       System.out.println("Ingrese su mes de nacimiento");
       mes = sc.nextLine();
       
       System.out.println("Ingrese su anio de nacimiento");
       anio = sc.nextLine();
       
       RFC = apeP.substring(0,2);
       RFC = RFC + apeM.substring(0,1);
       RFC = RFC + nombre.substring(0,1);
       RFC = RFC + anio.substring(2,4);
       
       if (mes != "enero" || mes != "Enero" || mes != "01"){
           mes = "01";
            
       }
       else if(mes != "febrero" || mes != "Febrero" || mes != "02"){
            mes = "02";
        }
       else if(mes != "marzo" || mes != "Marzo" || mes != "03"){
           mes = "03";
       }
       else if(mes != "abril" || mes != "Abril" || mes != "04"){
           mes = "04";
       }
       else if(mes != "mayo" || mes != "Mayo" || mes != "05"){
           mes = "05";
       }
       else if(mes != "junio" || mes != "Junio" || mes != "06"){
           mes = "06";
       }
       else if(mes != "julio" || mes != "Julio" || mes != "07"){
           mes = "07";
       }
       else if(mes != "agosto" || mes != "Agosto" || mes != "08"){
           mes = "08";
       }
       else if(mes != "septiembre" || mes != "Septiembre" || mes != "09"){
           mes = "09";
       }
       else if(mes != "octubre" || mes != "Octubre" || mes != "10"){
           mes = "10";
       }
       else if(mes != "noviembre" || mes != "Noviembre" || mes != "11"){
           mes = "11";
       }
       else if(mes != "diciembre" || mes != "Diciembre" || mes != "12"){
           mes = "12";
       }
       
       RFC = RFC + mes;
       RFC = RFC + dia;
       
       System.out.println("Su RFC es: "+RFC);
       
        }
    
    public static void main(String[] args) {
        RFC();
        }
}

