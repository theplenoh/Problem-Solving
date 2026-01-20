import java.util.Scanner;

class AsteriskTriangle1
{
    public static void main(String[] args)
    {
        Scanner kbd = new Scanner(System.in);
        int n = kbd.nextInt();

        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=i; j++)
                System.out.print("*");

            System.out.println("");
        }
    }
}
