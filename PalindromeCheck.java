import java.util.Scanner;

class PalindromeCheck
{
    public static void main(String[] args)
    {
        Scanner kbd = new Scanner(System.in);

        String str = "";
        int diff = 0;
        int last;

        str = kbd.nextLine();

        last = str.length() - 1;

        for (int i=0; i<(last / 2); i++, last--)
        {
            if (str.charAt(i) != str.charAt(last)) // if not the same
                diff += 1; // then increment
        }

        System.out.println((diff > 0)? false:true);
    }
}
