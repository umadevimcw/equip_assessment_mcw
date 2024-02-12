public static void main(String[] args) 
    {
        Main mainInstance = new Main();
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = scanner.nextInt();

        mainInstance.findUniqueArray(arr, n);
        String str = mainInstance.result;  
        System.out.println(str);
        scanner.close();
    }