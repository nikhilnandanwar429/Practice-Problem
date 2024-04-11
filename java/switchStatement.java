import java.util.Scanner;

public class switchStatement {
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

        int n = 2;

        switch (n) {
            case 1:
                System.out.println("This is One");
                break;
            case 2:
                System.out.println("This is 2");
                break;
            case 3:
                System.out.println("This is 3");
                break;
            default:
                System.out.println("This is Break");
        }

    }
}
