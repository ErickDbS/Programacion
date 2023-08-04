package com.mycompany.clases2;

public class Carro
{
    
    public String Modelo;
    
   public Carro()
   {
   }
   
   public Carro(String mod)
   {
       Modelo = mod;
       System.out.println("Objeto Carro creado con modelo: "+ Modelo);
   }
   
   public Carro(String mod, String año)
   {
       Modelo = mod;
       System.out.println("Objeto Carro creado con modelo: "+ Modelo + " y año: " + año);
   }
   
   public void Arrancar()
   {
       System.out.println("El carro modelo " + Modelo + " arranco");
   }
   
   public void Arrancar(String color)
   {
       System.out.println("El carro modelo " + Modelo + " y color " + color + " arranco");
   }
   
   public void Arrancar(String color, String marca)
   {
       System.out.println("El carro " + marca + "  modelo " + Modelo + " y color " + color + " arranco");
   }
   
   private void Apagar()
   {
       System.out.println("El carro modelo " + Modelo + " se apago");
   }
   
   protected void finalize()
   {
       System.out.println("Objero carro de modelo " + Modelo + " fue  destruido" );
   }
}
