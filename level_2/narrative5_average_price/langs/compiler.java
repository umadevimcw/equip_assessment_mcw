public static void main(String[] args)
{
    Scanner scanner = new Scanner(System.in);

    int n = scanner.nextInt();
    int[] arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = scanner.nextInt();
        
    System.out.println(average_price(n, arr));
}