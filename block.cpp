#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int start_offset, size, number, start, end;
    vector<string> data;
} Block;

Block block(int start_offset, int size, int number, int start, int end)
{
    Block b;
    return (Block) { .start_offset = start_offset, .size = size, .number = number, .start = start, .end = end };
}

int write(Block b, string data){
    b.data.push_back(data);
}

int is_full(Block b)
{
    return b.data.size() != 0;
}

int get_offset(Block b)
{
    return b.start_offset + b.number * b.size + 1;
}
