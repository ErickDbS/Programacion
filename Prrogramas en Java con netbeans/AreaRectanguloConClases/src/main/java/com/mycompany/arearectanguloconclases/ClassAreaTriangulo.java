package com.mycompany.arearectanguloconclases;

public class ClassAreaTriangulo {
    
    public ClassAreaTriangulo()
    {
    }
    
    
    
    public float CalcularArea(float b, float h)
    {
        float base = b;
        float altura = h;
        float a;
        
        return  a = b * h / 2;
    }
    
    public float CalcularArea(float x1, float x2, float y1, float y2)
    {
        float x = x1;
        float y = x2;
        float w = y1;
        float z = y2;
        float a;
        
        return a = (x1 + x2) * (y1 + y2) / 2;
    }
    
    protected void finalize()
    {
        System.out.println("Objeto destruido");
    }
    
}
