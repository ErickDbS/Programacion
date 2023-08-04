package com.mycompany.clases2;

public class Arbol
{
    public String Estacion;
    
    
    public Arbol()
    {
    }
    
    public Arbol(String tiempo)
    {
        Estacion = tiempo;
        System.out.println("Objeto arbol creado en la estacion: " + Estacion);
    }
    
    public Arbol(String tiempo, int frutas)
    {
        Estacion = tiempo;
        System.out.println("Objeto Arbol creado en la estacion: " + Estacion + " con " + frutas + " frutas");
    }
    
    public void Crecer()
    {
        System.out.println("El arbol en la estacion: " + Estacion + " crecio");
    }
    
    public void Crecer(String tipo)
    {
        System.out.println("El arbol de: " + tipo + " en la estacion: " + Estacion + " crecio");
    }
    
     public void Crecer(String tipo, String color)
    {
        System.out.println("El arbol de: " + tipo + " con hojas: " + color + " en la estacion: " + Estacion + " crecio");
    }
     
     private void Talar()
     {
         System.out.println("Se derrumbo el objeto Arbol en la estacion " + Estacion);
     }
     
     protected void finalize()
     {
         System.out.println("El objeto Arbol se destruyo en la estacion: " + Estacion);
     }
}
