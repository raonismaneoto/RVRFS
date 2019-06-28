
typedef struct {
    int start_offset, size, number, start, end;
    data[]
} Block;

int is_full(Block b){
    return size(b.data) == 0;
}

int get_offset(Block b){
    return b.start_offset + b.number * b.size  + 1;
}
