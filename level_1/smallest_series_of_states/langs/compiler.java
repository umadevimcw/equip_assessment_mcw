class compiler
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int target;
        int n;
        target = scan.nextInt();
        n = scan.nextInt();
        int factors[] = new int[n];

        boolean invalid = false;
        scan.nextLine();
        String row = scan.nextLine();
        String tokens[] = row.split(" ");
        int num_elements_in_a_row = 0;
        // Check if the string/row is empty
        if (row == "")
        {
            invalid = true;
        }
        for (String val : tokens)
        {
            factors[num_elements_in_a_row] = Integer.parseInt(val);
            num_elements_in_a_row++;
        }
        // If any row has lesser/greater number of elements than n, the input is invalid
        if (num_elements_in_a_row != n)
            invalid = true;

        // Check if the input is valid
        if (invalid)
        {
            System.out.println("You have entered an invalid input!");
            return;
        }

        // logic
        ArrayList<Integer> ans = user.lexicographically_smallest(target, factors);

        // Print the sorted matrix
        for (Integer v: ans)
        {
            System.out.print(v + " ");
        }
        System.out.println();
    }
}