package com.mycompany.clases;
import com.mycompany.arbol.*;
import com.mycompany.avion.*;

public class Clases {

    public static void main(String[] args) {
       System.out.println("Inicio clase Avion");
       Avion al = new Avion();
       al.Matricula = "2121212";
       al.Marca = "Volaris";
       
       al.Despegar();
       al.Aterrizar();
       System.out.println("Termino clase Avion");
       
       System.out.println("");
       
       System.out.println("Inicio clase Arbol");
       Arbol bl = new Arbol();
       bl.Frutas = 100;
       
       bl.Cosechar();
       System.out.println("Termino clase Arbol");
       
       System.out.println("");
       
       System.out.println("Inicio clase Banco");
       Banco cl = new Banco();
       cl.Dinero = 10000;
       
       cl.Abonar();
       cl.Retirar();
       System.out.println("Termino clase Banco");
       
       System.out.println("");
       
       System.out.println("Inicio clase Persona");
       Persona dl = new Persona();
       dl.Edad = 21;
       dl.Nombre = "Erick";
       
       dl.Caminar();
       dl.Correr();
       System.out.println("Termino clase Persona");
       
       System.out.println("");
       
       System.out.println("Inicio clase Edificio");
       Edificio el = new Edificio();
       el.Horario = "8:00AM A 11:59PM";
       el.Nombre = "UAS";
       
       el.Abiero();
       el.Cerrado();
       System.out.println("Termino clase Edificio");
       
       System.out.println("");
       
       System.out.println("Inicio clase Carro");
       Carro fl = new Carro();
       fl.Marca = "Bugatti";
       fl.Modelo = "La Voiture Noire";
       
       fl.Arrancar();
       fl.Apagar();
       System.out.println("Termino clase Carro");
    }
}
