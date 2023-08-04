package com.mycompany.sobrecarga;

public class ClassRectangulo {
    
    //Constructor de default usado cuando se va a sobrecargar un metodo
    public ClassRectangulo()
    {
    }
    
    //Metodo CalcularArea sobrecargado
    public float CalcularArea(float b, float h)
    {
        float base = b;
        float altura = h;
        float a;
       
        return a = b * h;
    }
    
    public float CalcularArea(float x1, float x2, float y1, float y2)
    {
        float x = x1;
        float y = x1;
        float w = y1;
        float z = y2;
        
        float r;
        
        return r = (x1 + x2) * (y1 + y2);
    }
    
    
    //Destructor de la clase o del objeto
    protected void finalize()
    {
        System.out.println("Objeto destruido");
    }
    
}
