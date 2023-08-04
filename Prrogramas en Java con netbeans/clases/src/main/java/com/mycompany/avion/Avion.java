package com.mycompany.avion;

public class Avion
{
    
    public String Marca;
    public String Matricula;
    
    public void Despegar()
    {
        System.out.println("Despego el Avion " + Marca + " Con Matricula " + Matricula);
    }
    
    public void Aterrizar()
    {
        System.out.println("Aterrizo el Avion " + Marca + " con matricula " + Matricula);
    }
}