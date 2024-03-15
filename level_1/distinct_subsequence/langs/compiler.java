class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.nextLine(); 
        String s = scanner.nextLine();
        Test test = new Test();
        int result = test.countDistinctSubsequence(s, N);
        System.out.print(result);
    }
}