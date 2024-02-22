class Main{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int R = scanner.nextInt();
        int N = scanner.nextInt();
        int[] arr = new int[N];
        for (int i = 0; i < N; i++) 
        {
            arr[i] = scanner.nextInt();
        }
        List<int[]> pairs = new ArrayList<>();
        Test test = new Test();
        test.find_pairs(arr, N, R, pairs);
        if (pairs.isEmpty())
        {
            System.out.println("No such pair");
        } 
        else 
        {
            for (int[] pair : pairs)
            {
                System.out.println("(" + pair[0] + ", " + pair[1] + ")");
            }
        }
        scanner.close();
    }
}

