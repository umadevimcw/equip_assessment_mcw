class Main
{
    public static void main(String[] args)
    {
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        int num = scanner.nextInt();
        Test test = new Test();
        System.out.println(test.minimum_possible_sum(num));
        scanner.close();
    }
}
