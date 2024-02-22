class Main 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
    
        int m = scanner.nextInt();
        int[][] set1 = new int[m][2];
        for (int i = 0; i < m; i++) 
        {
            set1[i][0] = scanner.nextInt();
            set1[i][1] = scanner.nextInt();
        }
    
        int n = scanner.nextInt();
        int[][] set2 = new int[n][2];
        for (int i = 0; i < n; i++) 
        {
            set2[i][0] = scanner.nextInt();
            set2[i][1] = scanner.nextInt();
        }
    
        Test test = new Test();
        int[][] result = test.aggregate_weights_by_value(set1, set2);
    
        for (int[] pair : result) 
            System.out.println(pair[0] + " " + pair[1]);
    }
}
