package com.mycompany.clases2;

public class Banco
{
    public int Dinero;
    
    
   public Banco()
   {
   }
   
  public Banco(int money)
  {
      Dinero = money;
      System.out.println("Objeto Bnaco creado con: " + Dinero + " dinero");
  }
  
   public Banco(int money, String clave)
  {
      Dinero = money;
      System.out.println("Objeto Bnaco creado con: " + Dinero + " dinero y clave " + clave);
  }
   
   public void Despositar()
   {
       System.out.println("El banco esta abiero con: " + Dinero + " dinero disponible");
   }
   
     public void Despositar(String nombre)
   {
       System.out.println("El banco " + nombre + " esta abiero con: " + Dinero + " dinero disponible");
   }
     
   public void Despositar(String nombre, String dia)
   {
       System.out.println("El banco " + nombre + " esta abiero el dia " + dia + " con: " + Dinero + " dinero disponible");
   }
   
   private void Cerrado()
   {
       System.out.println("El banco esta cerrado");
   }
   
   protected void finalize()
   {
       System.out.println("Objeto banco destruido");
   }
}
