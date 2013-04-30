void test_by_pointer(int* array, int sz)
{
    for(int i = 0; i < sz; ++i, ++array)
        *array = i;
}
