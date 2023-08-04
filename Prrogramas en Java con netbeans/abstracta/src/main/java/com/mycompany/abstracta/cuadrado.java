package com.mycompany.abstracta;

public class cuadrado extends figura {
    
    private double lado;

    public cuadrado(String color, double lado)
    {
        super(color);
        this.lado = lado;
    }

    @Override
    public double calcularArea()
    {
        return lado * lado;
    }
    
}
