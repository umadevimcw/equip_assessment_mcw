class Main {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        String s = scanner.nextLine();
        int result = test.countDistinctSubstrings(s);
        System.out.println(result);
        scanner.close();
    }
}
