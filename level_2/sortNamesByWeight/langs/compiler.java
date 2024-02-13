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

    String[] sortedNames = sortNamesByWeight(n, names, weights);

    for (int i = 0; i < n; i++)
        System.out.print(sortedNames[i] + " ");
}