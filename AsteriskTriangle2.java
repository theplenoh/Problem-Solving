import java.util.Scanner;

class AsteriskTriangle2
{
    public static void main(String[] args)
    {
        Scanner kbd = new Scanner(System.in);
        int n = kbd.nextInt();

        for (int i=1; i<=n; i++)
        {
            int j, k;

            for (j=n - i - 1; j >= 0; j--)
            {
                System.out.print(" ");
            }

            for (k=1; k<=i; k++)
                System.out.print("*");

            System.out.println("");
        }
    }
}
