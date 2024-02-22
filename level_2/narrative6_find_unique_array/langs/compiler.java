class Main
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
        arr[i] = scanner.nextInt();
        
        Test test = new Main();
        test.find_unique_array(arr, n);
        String str = test.result;  
        System.out.println(str);
        scanner.close();
    }
}