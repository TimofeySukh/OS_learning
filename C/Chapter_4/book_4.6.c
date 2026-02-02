int next_even() {
    static int n = 0;
    int temp = n;
    n += 2;
    return temp;
}