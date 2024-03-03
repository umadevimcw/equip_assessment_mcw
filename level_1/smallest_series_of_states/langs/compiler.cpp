int main()
{
    int target;
    int n;
    std::string s;
    std::vector<int> factors;
    std::vector<int> ans;
    bool invalid = false;
    std::cin >> target;
    std::cin >> n;
    // To trim any trailing space after inputting the numbers
    std::cin >> std::ws; // Alternatively use, cin.ignore(256, '\n');

    int num_elements_in_a_row = 0;
    getline(std::cin, s);
    //Check if the string/row is empty
    if(s == "")
        invalid = true;
    std::stringstream ss(s);
    s = "";
    while(getline(ss, s, ' '))
    {
        factors.push_back(stoi(s));
        num_elements_in_a_row++;
    }
    // If any row has lesser/greater number of elements than n, the input is invalid
    if(num_elements_in_a_row != n || invalid == true)
        std::cout << "\nYou have entered an invalid input!" << std::endl;
    else
    {
        ans = lexicographically_smallest(target, factors);
        //Printing
        for(auto i:ans)
            std::cout<<i<<" ";
    }
    return 0;
}