import java.util.Scanner;


public class Lazysequence {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        lazySequence(n);
    }

    public static void lazySequence(int n) {
        if (n == 0) {
            System.out.print(n + " ");
            return;
        }
        System.out.print(n + " ");
        lazySequence(n - 1);
        System.out.print(n + " ");
    }

}