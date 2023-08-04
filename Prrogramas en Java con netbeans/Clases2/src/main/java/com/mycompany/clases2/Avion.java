package com.mycompany.clases2;

public class Avion
{
    
    public String Marca;
    public String Matricula;
    
    public Avion()
    {
    }
    
    public Avion(String mat)
    {
        Matricula = mat;
        System.out.println("Objeto Avion con matricula: " + mat + " fue creado");
    }
    
     public Avion(String mat, String mrc)
    {
        Matricula = mat;
        Marca = mrc;
        System.out.println("Objeto Avion con matricula: " + mat + " y marca " + Marca + " fue creado");
    }
     
     public void Despegar()
     {
         System.out.println("El avion con matricula: " + Matricula + " despego");
     }
     
     public void Despegar(String color)
     {
         System.out.println("El avion con matricula: " + Matricula + " y color "+ color + " despego");
     }
     
     public void Despegar(String color, String destino)
     {
         System.out.println("El avion con matricula: " + Matricula + " y color "+ color + " despego con destino a: " + destino);
     }
     
     private void Aterrizar()
     {
         System.out.println("El avion con matricula: " + Matricula + "aterrizo");
     }
     
     protected void finalize()
     {
         System.out.println("Objeto avion con matricula: " + Matricula + " fue destruido");
     }
}