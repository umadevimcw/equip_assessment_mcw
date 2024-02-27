int main()
{
    int m;
    int n;
    std::string s;
    std::vector<std::vector<int>> input;
    std::vector<int> temp;
    bool invalid = false;
    std::cin >> m;
    std::cin >> n;
    // To trim any trailing space after inputting the numbers
    std::cin >> std::ws; // Alternatively use, cin.ignore(256, '\n');

    for(int i = 0; i < m; i++)
    {
        int num_elements_in_a_row = 0;
        getline(std::cin, s);
        //Check if the string/row is empty
        if(s == "")
            invalid = true;
        std::stringstream ss(s);
        s = "";
        while(getline(ss, s, ' '))
        {
            temp.push_back(stoi(s));
            num_elements_in_a_row++;
        }
        // If any row has lesser/greater number of elements than n, the input is invalid
        if(num_elements_in_a_row != n)
            invalid = true;
        input.push_back(temp);
        temp.clear();
    }
    // Check if the input is valid
    if(invalid == true)
        std::cout << "\nYou have entered an invalid input!" << std::endl;
    else
    {
        auto output = layerwise_rotate(input);
        //Print the sorted matrix
        for (auto &row: output)
        {
            for (auto &v: row)
            {
                printf("%d ", v);
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}