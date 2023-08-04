package com.mycompany.clases2;

public class Clases2 {

    public static void main(String[] args) {
       
 System.out.println("Programa Edificio iniciado");
        
        Edificio2 a0 = new Edificio2();
          a0.Abierto();
          
         Edificio2 a1 = new Edificio2("Ibis");
         a1.Abierto("Verde");
         
         Edificio2 a2 = new Edificio2("Ibis", "Cardenas");
         a2.Abierto("Verde", "Enero");
         
 System.out.println("Programa Edificio terminado");
 
 System.out.println();
         
 System.out.println("Programa Arbol iniciado");
         Arbol b0 = new Arbol();
         b0.Crecer();
         
         Arbol b1 = new Arbol("Primavera");
         b1.Crecer("Roble");
         
         Arbol b2 = new Arbol("Primavera" , 30);
         b2.Crecer("Roble", "Verdes");
         
 System.out.println("Programa Arbol Terminado");
 
 System.out.println();
  
 System.out.println("Programa Avion iniciado");
          Avion c0 = new Avion();
          c0.Despegar();
          
          Avion c1 = new Avion("123456789");
          c1.Despegar("Negro");
          
          Avion c2 = new Avion("123456789", "Volaris");
          c2.Despegar("Negro", "Los Mochis");
          
 System.out.println("Programa Avion terminado");
 
 System.out.println();

  System.out.println("Programa Banco iniciado");
            Banco d0 = new Banco();
            d0.Despositar();
            
            Banco d1 = new Banco(100000);
            d1.Despositar("Azteca");
            
             Banco d2 = new Banco(100000, "1585");
            d2.Despositar("Azteca", "Lunes");
            
 System.out.println("Programa Banco terminado");
 
 System.out.println();

 System.out.println("Programa Carro iniciado");
               Carro e0 = new Carro();
               e0.Arrancar();
               
                Carro e1 = new Carro("Corvette");
               e1.Arrancar("Rojo");
               
               Carro e2 = new Carro("Corvette","2020" );
               e2.Arrancar("Rojo", "Chevrolet");
               
 System.out.println("Programa Carro terminado");
 
 System.out.println();

 System.out.println("Programa Persona iniciado");
                 Persona f0 = new Persona();
                 f0.Caminar();
                 
                  Persona f1 = new Persona("Erick");
                 f1.Caminar("Lunes");
                 
                 Persona f2 = new Persona("Erick", 21);
                 f2.Caminar("Lunes", "6:00");
                 
 System.out.println("Programa Persona terminado");

    }
}
