template <typename Iterator>
Iterator k_unique(Iterator begin, Iterator end, int k)
{
    auto y = begin;
    for (auto itr = begin; itr != end; itr++)
        if (y - begin < k || *itr != *(y - k))
            *y++ = *itr;
    return y;
}
