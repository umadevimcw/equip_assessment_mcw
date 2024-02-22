
class Main
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int m;
        int n;
        m = scan.nextInt();
        n = scan.nextInt();
        int input[][] = new int[m][n];

        boolean invalid = false;
        scan.nextLine();
        for (int i = 0; i < m; i++)
        {
            String row = scan.nextLine();
            String tokens[] = row.split(" ");
            int num_elements_in_a_row = 0;
            // Check if the string/row is empty
            if (row == "")
            {
                invalid = true;
                break;
            }
            for (String val : tokens)
            {
                input[i][num_elements_in_a_row] = Integer.parseInt(val);
                num_elements_in_a_row++;
            }
            // If any row has lesser/greater number of elements than n, the input is invalid
            if (num_elements_in_a_row != n)
                invalid = true;
        }

        // Check if the input is valid
        if (invalid)
        {
            System.out.println("You have entered an invalid input!");
            return;
        }
        Test test = new Test();
        test.sortMatrix(input, m, n);
        // Print the sorted matrix
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                System.out.print(input[i][j] + " ");
            }
            System.out.println();
        }
    }
}