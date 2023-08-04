package com.mycompany.banco;

public class Banco
{
    public int Dinero;
    
    public void Abonar()
    {
        System.out.println("Se abono " + Dinero + " al banco ");
    }
    
    public void Retirar()
    {
        System.out.println("Se retiro " + Dinero + " del banco ");
    }
}
