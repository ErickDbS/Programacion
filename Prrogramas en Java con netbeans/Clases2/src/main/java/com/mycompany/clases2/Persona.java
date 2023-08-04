package com.mycompany.clases2;

public class Persona
{
    
    public String Nombre;
    public int Edad;
    
    public Persona()
    {
    }
    
    public Persona(String nom)
    {
        Nombre = nom;
        System.out.println("Objeto persona creado con nombre " + Nombre);
    }
    
     public Persona(String nom, int edad)
    {
        Nombre = nom;
        Edad = edad;
        System.out.println("Objeto persona creado con nombre " + Nombre + " y edad " + edad);
    }
     
     public void Caminar()
     {
         System.out.println(Nombre + " empezo a caminar");
     }
     
      public void Caminar(String dia)
     {
         System.out.println(Nombre + " empezo a caminar el dia " + dia);
     }
      
        public void Caminar(String dia, String hora)
     {
         System.out.println(Nombre + " empezo a caminar el dia " + dia + " a las " + hora);
     }
        
        private void Descansar()
        {
            System.out.println(Nombre + " tomo un descanso");
        }
        
        protected void finalize()
        {
            System.out.println("Objeto persona destruido");
        }
}
