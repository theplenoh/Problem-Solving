import java.util.Scanner;

class SumUpToN
{
    public static void main(String[] args)
    {
        Scanner kbd = new Scanner(System.in);
        int sum = 0;

        int n = kbd.nextInt();

        for (int i=1; i<=n; i++)
            sum += i;

        System.out.print(sum);
    }
}
