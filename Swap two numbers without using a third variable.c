int main() {
    int x = 5, y = 10;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d\n", x, y);
    return 0;
}
