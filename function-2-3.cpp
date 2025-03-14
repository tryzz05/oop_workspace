
bool is_palindrome(int integers[], int length)
{
    if (length <=0) {
        return false;
    }
    for (int i = 0; i < length / 2; ++i)
    {
        if (integers[i] != integers[length - 1 - i])
            return false;
    }
    return true;
}

int sum_array_elements(int integers[], int length)
{
    if (length <=0) {
        return -1;
    }
    int sum_int = 0;
    for (int i = 0; i < length; ++i)
    {
        sum_int += integers[i];
    }
    return sum_int;
}

int sum_if_palindrome(int integers[], int length)
{
    if (is_palindrome(integers, length) == false) {
        return -2;
    }
    else if (sum_array_elements(integers, length) == -1) {
        return -1;
    }
    else
    return sum_array_elements(integers, length);
}