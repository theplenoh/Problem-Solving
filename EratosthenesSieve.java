import java.util.Scanner;

class EratosthenesSieve
{
    public static void printSieve(final int MAX, final int rangeM, final int rangeN)
    {
        int[] arr = new int[MAX+1];

        for (int i=0; i<=MAX; i++)
            arr[i] = 1;

        arr[0] = 0;
        arr[1] = 0;
        for (int i=2; i<=MAX; i++)
        {
            if (arr[i] == 0)
                continue;
            arr[i] = i;
            for (int j=2; i*j<=MAX; j++)
                arr[i*j] = 0;
        }

        for (int i=0; i<=MAX; i++)
        {
            if ((arr[i] != 0) && (rangeM <= arr[i] && arr[i] <= rangeN))
                System.out.print(arr[i] + " ");
        }
        System.out.println("");
    }

    public static void main(String[] args)
    {
        Scanner kbd = new Scanner(System.in);
        int inputA, inputB;

        inputA = kbd.nextInt();
        inputB = kbd.nextInt();

        printSieve(1000000, inputA, inputB);
    }
}
