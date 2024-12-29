int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; 
    int y = *ptr; // y will be 20
    *ptr = 30; 
    int z = x; // z will be 10
    return 0;
}