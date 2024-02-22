class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
    
        int n = scanner.nextInt();
        String[] names = new String[n];
        int[] weights = new int[n];
    
        for (int i = 0; i < n; i++)
            names[i] = scanner.next();
    
        for (int i = 0; i < n; i++)
            weights[i] = scanner.nextInt();

        Test test = new Test();
        String[] sortedNames = test.sort_names_by_weight(n, names, weights);
    
        for (int i = 0; i < n; i++)
            System.out.print(sortedNames[i] + " ");
    }
}
