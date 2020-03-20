#include <binheap.h>

#define PARENT(node) ((node-1)/2)
#define LEFT_CHILD(node) (2*(node)+1)
#define RIGHT_CHILD(node) (2*(node+1))

//node represent the index, which goes from 0 to n-1
#define VALID_NODE(H, node) ((H)->num_of_elem>(node))

// (H)->A = base of the address
// node*key_size
#define ADDR(H, node) ((H)->A + (node)*(H)->key_size)

#define INDEX_OF(H, addr) (((addr)-((H)->A))/(H)->key_size)
int is_heap_empty(const binheap_type *H)
{
    // This function must be re-implemented

    return 1;
}

const void *min_value(const binheap_type *H)
{
    // This function must be re-implemented

    return NULL;
}

const void *extract_min(binheap_type *H)
{
    // This function must be re-implemented

    return NULL;
}

binheap_type *build_heap(void *A, 
                         const unsigned int num_of_elem,
                         const unsigned int max_size,  
                         const size_t key_size, 
                         total_order_type leq)
{
    // This function must be re-implemented

    return NULL;
}

void delete_heap(binheap_type *H)
{
    // This function must be implemented
}

const void *decrease_key(binheap_type *H, void *node, const void *value)
{
    // This function must be re-implemented

    return NULL;
}

const void *insert_value(binheap_type *H, const void *value)
{
    // This function must be re-implemented

    return NULL;
}

void print_heap(const binheap_type *H, 
                void (*key_printer)(const void *value))
{
    // This function must be implemented
}