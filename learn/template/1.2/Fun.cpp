template <typename T>
T const &max(T const *list, unsigned int length)
{
    T const *maxValue(list);

    for (unsigned int i = 0; i < length; ++i)
    {
        if (list[i] > *maxValue)
        {
            maxValue = &list[i];
        }
    }

    return *maxValue;
}