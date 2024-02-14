int main()
{
    int N, R;
    scanf("%d", &R);
    scanf("%d", &N);

    int arr[N];
    for (int i =  0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }

    input_Pairs pairs = {NULL,  0};

    find_pairs(arr, N, R, &pairs);

    if (pairs.output_numPairs ==  0)
    {
        printf("No such pair\n");
    } 
    else
    {
        for (int i =  0; i < pairs.output_numPairs; ++i)
        {
            printf("(%d, %d) ", pairs.Pairs[i].first, pairs.Pairs[i].second);
        }
        printf("\n");
    }

    free(pairs.Pairs);

    return  0;
}
