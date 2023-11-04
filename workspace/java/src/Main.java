import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Main {

    //private static final Scanner sc = new Scanner(System.in);
    private static final Scanner sc;

    static {
        try {
            sc = new Scanner(new File("src/in.txt"));
        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        }
    }

    public static void main(String[] args) {
        int i = sc.nextInt();
        double d = sc.nextDouble();
        sc.nextLine(); // Consume newline left-over
        String s = sc.nextLine();

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);

        sc.close();
    }
}