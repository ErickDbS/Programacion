package com.mycompany.clases2;

public class Edificio2
{
    
    public String Nombre;
    public String Horario;
    
    //Declaramos un constructor default este siempre se declara cuando se va a utilizar la sobrecarga
    public Edificio2()
    {
    }
    
    //Declaramos un constructor sobrecargado 1 (por que solo recibe un parametro)
    public Edificio2(String nom)
    {
        Nombre = nom;
        System.out.println("Objeto Edificio creado: " + Nombre);
    }
    
    public Edificio2(String nom, String calle)
    {
        Nombre = nom;
        System.out.println("Objeto Edificio creado: " + Nombre + " en la calle " + calle);
    }
    
    public void Abierto()
    {
        System.out.println("El Edificio: " + Nombre + " esta abierto");
    }
    
    public void Abierto(String color)
    {
        System.out.println("El Edificio: " + Nombre + " de color: " + color +  " esta abierto");
    }
    
    public void Abierto(String color, String mes)
    {
        System.out.println("El Edificio: " + Nombre + " de color: " + color + " esta abierto en el mes de: " + mes);
    }
    
    private void Cerrado()
    {
        System.out.println("El Edificio: " + Nombre + " esta cerrado");
    }
    
    protected void finalize()
    {
        System.out.println("El obejero Edificio fue destruido :" + Nombre);
    }
}