import java.util.Scanner;

public class function {

    public static void printHello(){
        System.out.println("Hello World");
    }

    public static int calcSum(int a , int b){
        return a+b;
    }

    public static long fact(int n){
        if (n == 0) {
            return 1;
        }
        return (n * fact(n-1));
    }

    public static void swap() {
        //Java always pass by value
    }

    public static boolean isPrime(int n){
        //boolean isprime = true;

        if(n == 2)
        return true;

        if(n == 1)
        return false;

        for(int i = 2 ; i <= Math.sqrt(n) ; i++){
            if(n % i == 0){
                return false;
            }
        } 

        return true;
    }

    public static void printInRange(int n){
        for(int i=1 ; i<=n ; i++){
            if(isPrime(i))
            System.out.println(i);
        }
    }

    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

        printHello();

        int n = sc.nextInt();
        int m = sc.nextInt();

        int a = calcSum( n , m );
        System.out.println("Sum is " + a);

        long l = fact(n);
        System.out.println("factorial = " + l);

        // swap(n , m);
        // System.out.println("n = " + n);
        // System.out.println("m = " + m);

        long ncr = fact(n)/(fact(m)*fact(n-m));
        System.out.println("ncr = " + ncr);

        if(isPrime(n)){
            System.out.println("Prime");
        }
        else{
            System.out.println("Not prime");
        }

        printInRange(n);

    }
}