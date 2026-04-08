# Binary Trees 🌳

## Description

This project is an introduction to binary trees in C. We implement various functions to create, traverse, and manipulate binary tree data structures.

## Example

```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
```

- **(098)** : root node
- **(006), (016), (256), (512)** : leaf nodes
- **Height** : 2
- **Size** : 7
```
---

## Data Structures

```c
struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

---

## Files

| File | Function | Description |
|------|----------|-------------|
| `0-binary_tree_node.c` | `binary_tree_node` | Creates a new binary tree node |
| `1-binary_tree_insert_left.c` | `binary_tree_insert_left` | Inserts a node as left-child |
| `2-binary_tree_insert_right.c` | `binary_tree_insert_right` | Inserts a node as right-child |
| `3-binary_tree_delete.c` | `binary_tree_delete` | Deletes an entire binary tree |
| `4-binary_tree_is_leaf.c` | `binary_tree_is_leaf` | Checks if a node is a leaf |
| `5-binary_tree_is_root.c` | `binary_tree_is_root` | Checks if a node is a root |
| `6-binary_tree_preorder.c` | `binary_tree_preorder` | Pre-order traversal |
| `7-binary_tree_inorder.c` | `binary_tree_inorder` | In-order traversal |
| `8-binary_tree_postorder.c` | `binary_tree_postorder` | Post-order traversal |
| `9-binary_tree_height.c` | `binary_tree_height` | Measures the height of a tree |
| `10-binary_tree_depth.c` | `binary_tree_depth` | Measures the depth of a node |
| `11-binary_tree_size.c` | `binary_tree_size` | Measures the size of a tree |
| `12-binary_tree_leaves.c` | `binary_tree_leaves` | Counts the leaves of a tree |
| `13-binary_tree_nodes.c` | `binary_tree_nodes` | Counts nodes with at least 1 child |
| `14-binary_tree_balance.c` | `binary_tree_balance` | Measures balance factor |
| `15-binary_tree_is_full.c` | `binary_tree_is_full` | Checks if a tree is full |
| `16-binary_tree_is_perfect.c` | `binary_tree_is_perfect` | Checks if a tree is perfect |
| `17-binary_tree_sibling.c` | `binary_tree_sibling` | Finds the sibling of a node |
| `18-binary_tree_uncle.c` | `binary_tree_uncle` | Finds the uncle of a node |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
```

---

## Requirements

- Ubuntu 20.04 LTS
- gcc compiler
- Betty style compliant
- No global variables
- No more than 5 functions per file

---

## Authors

- **Lonie** 
- **Ouarda** 