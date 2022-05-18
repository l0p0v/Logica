package com.dankicode.utilidades;

import org.jetbrains.annotations.Contract;
import org.jetbrains.annotations.NotNull;

public class Utils {

    /*
    int, double, char, String, float
     */
    private int idade = 16;
    public double peso = 63.5;
    public float peso2 = 63.5f;
    public String nome = "Felippe";

    public void printHelloWorld() {
        System.out.println("printing.. Hello World!");
        idade = 30;
        printOutraCoisa();
    }

    private String returnHelloWorld() {
        return "returning.. Hello World!";
    }

    private void printOutraCoisa() {
        System.out.println("outra coisa");
    }
}
