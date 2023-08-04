package com.mycompany.edificio;

public class Edificio
{
    
    public String Nombre;
    public String Horario;
    
    public void Abiero()
    {
        System.out.println("El edificio " + Nombre + " esta abierto a las " + Horario);
    }
    
    public void Cerrado()
    {
        System.out.println("El edificio " + Nombre + " esta cerrado a las " + Horario);
    }
}