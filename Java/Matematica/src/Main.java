import java.text.MessageFormat;

public class Main {
    private static void print(String frase, double resultado) {
        String message = MessageFormat.format("{0}; {1}", frase, resultado);
        System.out.println(message + "%");
    }

    public static void main(String[] args) {
        double div3 = 0;
        double par = 0;
        double div3_e_par = 0;
        double div3_ou_par = 0;
        double not_div3_e_par = 0;
        double not_div3_ou_par = 0;
        double total = 36;

        for (int i = 1; i <= total; i++) {
            if (i % 2 == 0) {
                par++;
            }
            if (i % 3 == 0) {
                div3++;
            }
            if (i % 3 == 0 && i % 2 == 0) {
                div3_e_par++;
            }
            if (i % 3 == 0 || i % 2 == 0) {
                div3_ou_par++;
            }
            if (!(i % 3 == 0 && i % 2 == 0)) {
                not_div3_e_par++;
            }
            if (!(i % 3 == 0 || i % 2 == 0)) {
                not_div3_ou_par++;
            }
        }

        System.out.println("Determine a probabilidade de:\n");
        print("a) sair um numero par", par / total * 100);
        print("b) sair um multiplo de 3", div3 / total * 100);
        print("c) sair um numero par e multiplo de 3", div3_e_par / total * 100);
        print("d) sair um numero par ou multiplo de 3", div3_ou_par / total * 100);
        print("e) nao sair um numero par nem um multiplo de 3", not_div3_e_par / total * 100);
        print("f) nao sair um numero par ou nao sair um multiplo de 3", not_div3_ou_par / total * 100);
    }
}
