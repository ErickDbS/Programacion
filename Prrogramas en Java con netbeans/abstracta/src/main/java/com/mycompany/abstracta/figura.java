package com.mycompany.abstracta;

public abstract class figura {
    
    private String color;

    public figura(String color)
    {
        this.color = color;
    }

    public abstract double calcularArea();

    public String getColor()
    {
        return color;
    }
}
