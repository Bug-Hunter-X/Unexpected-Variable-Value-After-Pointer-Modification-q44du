int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; 
    int y = *ptr; // y will be 20
    *ptr = 30; 
    int z = *ptr; // z will be 30, correctly reflecting the change.
    int w = x; // w will also be 30, reflecting the change through the pointer.
    return 0;
}