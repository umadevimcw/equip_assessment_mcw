class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) 
        {
            arr[i] = scanner.nextInt();
        }

        int m = scanner.nextInt();
        int[] bArr = new int[m];
        for (int i = 0; i < m; i++)
        {
            bArr[i] = scanner.nextInt();
        }

        Test test = new Test();
        System.out.println(test.frequent_integer_not_blocked(n, arr, m, bArr));

        scanner.close();
    }
}