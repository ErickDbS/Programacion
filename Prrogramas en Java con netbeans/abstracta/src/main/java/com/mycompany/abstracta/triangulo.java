package com.mycompany.abstracta;

public class triangulo extends figura{
    private double base;
    private double altura;

    public triangulo(String color, double base, double altura)
    {
        super(color);
        this.base = base;
        this.altura = altura;
    }
    
    @Override
    public double calcularArea()
    {
        return (base * altura) / 2;
    }
    
}
