# 📘 Data Structure and Algorithms

### by Ayon Das Gupta

> Competitive Programming reference sheet organized by topic.

## 👨‍💻 About Me

**Ayon Das Gupta**  
BSc in Computer Science & Engineering — Premier University Chittagong, Bangladesh

📧 dasguptaayon55@gmail.com &nbsp;|&nbsp; 📍 Chattogram, Bangladesh

---

## 🔗 Profiles

| Platform                                                | Handle    | Highest Rating | Best Rank    | Solved |
| ------------------------------------------------------- | --------- | -------------- | ------------ | ------ |
| 🟦 [Codeforces](https://codeforces.com/profile/Ayon)    | Ayon      | 1291 (Pupil)   | 2745 / 33937 | 1600+  |
| 🟨 [CodeChef](https://www.codechef.com/users/ayoncoder) | ayoncoder | 1590 (2★)      | 268 / 5733   | 200+   |
| 🟥 [AtCoder](https://atcoder.jp/users/AyonCoder)        | AyonCoder | 496 (8 Kyu)    | 1711 / 9530  | 200+   |
| 🟩 [LeetCode](https://leetcode.com/AyonCoder)           | AyonCoder | —              | —            | 100+   |
| 💼 [LinkedIn](https://www.linkedin.com/in/ayoncse)      | ayoncse   | —              | —            | —      |
| 🐙 [GitHub](https://github.com/Ayon-CSE)                | Ayon-CSE  | —              | —            | —      |

## 📁 Folder Structure

| Folder                      | Topic                    | Files |
| --------------------------- | ------------------------ | ----- |
| `01_template`               | Base Template            | 1     |
| `02_math`                   | Math & Number Theory     | 19    |
| `03_graph`                  | Graph Algorithms         | 24    |
| `04_string`                 | String Algorithms        | 4     |
| `05_data_structures`        | Data Structures          | 8     |
| `06_dp`                     | Dynamic Programming      | 7     |
| `07_binary_search`          | Binary Search            | 4     |
| `08_bit_manipulation`       | Bit Manipulation         | 16    |
| `09_sorting`                | Sorting & Searching      | 3     |
| `10_sliding_window`         | Sliding Window           | 6     |
| `11_recursion_backtracking` | Recursion & Backtracking | 6     |
| `12_tips_and_tricks`        | CP Tips Cheat Sheet      | 1     |
| `13_miscellaneous`          | Miscellaneous            | 11    |

---

## 🔢 02_math — Math & Number Theory

| File                                   | Description                                                |
| -------------------------------------- | ---------------------------------------------------------- |
| `01_legendre_trailing_zeros.cpp`       | Count trailing zeros in n! using Legendre's formula        |
| `02_modular_arithmetic.cpp`            | modnor, modmul, modadd, modsub, modpow, modinverse, moddiv |
| `03_int128_read_print.cpp`             | `__int128` read and print functions                        |
| `04_prefix_factorial_nCr.cpp`          | Precompute factorials, compute nCr with modular inverse    |
| `05_lcm_overflow_safe.cpp`             | LCM that detects overflow                                  |
| `06_sqrt_cbrt_precision.cpp`           | SQRT and CBRT without floating point precision errors      |
| `07_is_prime.cpp`                      | O(√n) prime check                                          |
| `08_sieve_of_eratosthenes.cpp`         | Classic sieve using bitset                                 |
| `09_fast_sieve_1e8_bitset.cpp`         | Fast sieve up to 1e8 using bitset                          |
| `10_euler_phi_totient.cpp`             | Euler's totient φ(n) for a single n                        |
| `11_euler_phi_sieve_1_to_n.cpp`        | Compute φ(i) for all i from 1 to n                         |
| `12_smallest_prime_factor_SPF_GPF.cpp` | SPF/GPF sieve + factorize in O(log n)                      |
| `13_segmented_sieve.cpp`               | Find primes in range [l, r]                                |
| `14_prime_factorization.cpp`           | Factorize n with prime powers                              |
| `15_number_of_divisors.cpp`            | Count divisors of n using prime factorization              |
| `16_sum_of_divisors.cpp`               | Sum of divisors of n using prime factorization             |
| `17_binary_exponentiation.cpp`         | Fast power: base^pow % mod                                 |
| `18_divisor_count_1_to_n.cpp`          | Divisor count for all numbers 1 to n in O(n log n)         |
| `19_gcd_lcm.cpp`                       | Recursive GCD and LCM                                      |

---

## 🌐 03_graph — Graph Algorithms

| File                                           | Description                                                  |
| ---------------------------------------------- | ------------------------------------------------------------ |
| `01_dfs_basic_undirected.cpp`                  | DFS on undirected graph + connected components count         |
| `02_dfs_multisource_2d_grid.cpp`               | Multi-source DFS on 2D grid                                  |
| `03_dfs_2d_grid_return_sum.cpp`                | DFS on 2D grid returning ll sum of component                 |
| `04_bfs_basic.cpp`                             | BFS traversal order                                          |
| `05_bfs_shortest_path_with_parent.cpp`         | BFS shortest path with parent tracking + path reconstruction |
| `06_bfs_2d_grid.cpp`                           | BFS on 2D grid (8-directional)                               |
| `07_multisource_bfs.cpp`                       | Multi-source BFS (distance to nearest 0)                     |
| `08_dfs_2d_flood_fill.cpp`                     | DFS flood fill on 2D grid                                    |
| `09_bfs_2d_flood_fill.cpp`                     | BFS flood fill on 2D grid                                    |
| `10_bfs_minimum_distance_oranges.cpp`          | BFS minimum distance (Rotting Oranges)                       |
| `11_cycle_detection_undirected_bfs.cpp`        | Detect cycle in undirected graph using BFS                   |
| `12_cycle_detection_undirected_dfs.cpp`        | Detect cycle in undirected graph using DFS                   |
| `13_bipartite_check_bfs.cpp`                   | Bipartite check (multi-component) using BFS                  |
| `14_bipartite_check_dfs.cpp`                   | Bipartite check (multi-component) using DFS                  |
| `15_cycle_detection_directed_dfs.cpp`          | Detect cycle in directed graph using DFS + pathvis           |
| `16_safe_nodes_directed_graph.cpp`             | Find all safe nodes (not in any cycle)                       |
| `17_topological_sort_dfs.cpp`                  | Topological sort using DFS + stack                           |
| `18_topological_sort_bfs_kahns.cpp`            | Topological sort using BFS (Kahn's algorithm)                |
| `19_tree_diameter_v1.cpp`                      | Tree diameter (two BFS/DFS, weighted edges)                  |
| `20_tree_diameter_v2_max_dist.cpp`             | Tree diameter + max distance from both endpoints             |
| `21_alien_dictionary.cpp`                      | Alien dictionary — derive char order using topological sort  |
| `22_shortest_path_dag_toposort.cpp`            | Shortest path in DAG using topological sort                  |
| `23_shortest_path_undirected_unit_weights.cpp` | Shortest path in undirected graph with unit weights (BFS)    |
| `24_word_ladder_bfs.cpp`                       | Word Ladder — BFS shortest transformation sequence           |

---

## 🔤 04_string — String Algorithms

| File                            | Description                                      |
| ------------------------------- | ------------------------------------------------ |
| `01_string_hashing.cpp`         | Polynomial string hash                           |
| `02_substring_hash.cpp`         | Substring hash using prefix array + power        |
| `03_kmp_lps_pattern_search.cpp` | KMP: LPS array, pattern search, prefix frequency |
| `04_z_function.cpp`             | Z-function for pattern matching                  |

---

## 🗃️ 05_data_structures — Data Structures

| File                                       | Description                                                    |
| ------------------------------------------ | -------------------------------------------------------------- |
| `01_policy_based_ordered_set.cpp`          | PBDS ordered set/multiset with `find_by_order`, `order_of_key` |
| `02_struct_with_vector.cpp`                | Struct with multiple fields stored in vector                   |
| `03_prefix_sum_2d.cpp`                     | 2D prefix sum with rectangle range queries                     |
| `04_segment_tree_build_query_update.cpp`   | Segment tree: build, range_query (min), point update           |
| `05_segment_tree_with_node_struct.cpp`     | Segment tree with Node struct (bracket matching)               |
| `05b_segment_tree_frequency_array.cpp`     | Segment tree on frequency/cnt array                            |
| `06_lazy_propagation.cpp`                  | Lazy propagation: propagate, range update, range query         |
| `07_lazy_propagation_advanced_2arrays.cpp` | Advanced lazy propagation with two arrays                      |

---

## 💡 06_dp — Dynamic Programming

| File                                     | Description                                      |
| ---------------------------------------- | ------------------------------------------------ |
| `01_dp_1d_memoization.cpp`               | 1D DP memoization template                       |
| `02_dp_1d_tabulation.cpp`                | 1D DP tabulation template                        |
| `03_coin_change_count_ways.cpp`          | Coin change — count distinct ways to reach sum   |
| `04_coin_change_min_coins.cpp`           | Coin change — minimum coins to reach sum         |
| `05_dp_recursion_with_map.cpp`           | Recursion + map memoization                      |
| `06_per_index_subarray_contribution.cpp` | Per-index contribution: `a[i] * (i+1) * (n-i)`   |
| `07_all_subarray_xor_contribution.cpp`   | All subarray XOR contribution using bit counting |

---

## 🔍 07_binary_search — Binary Search

| File                                      | Description                                      |
| ----------------------------------------- | ------------------------------------------------ |
| `01_manual_lower_upper_bound.cpp`         | Manual `lower_bound` and `upper_bound` functions |
| `02_floating_point_binary_search.cpp`     | Binary search on floating point (eps tolerance)  |
| `03_binary_search_real_numbers.cpp`       | Binary search on real numbers (100 iterations)   |
| `04_binary_search_subarray_partition.cpp` | Minimize max subarray sum with k partitions      |

---

## ⚙️ 08_bit_manipulation — Bit Manipulation

| File                                 | Description                                         |
| ------------------------------------ | --------------------------------------------------- |
| `01_check_bits_from_two_numbers.cpp` | Check common set bits from two/three numbers        |
| `02_set_unset_check_bit.cpp`         | Check if i-th bit is set or unset                   |
| `03_inverse_not_bits.cpp`            | NOT / inverse bits                                  |
| `04_set_unset_toggle_bit.cpp`        | Set bit (OR), unset bit (AND NOT), toggle bit (XOR) |
| `05_modulo_using_bits.cpp`           | Modulo using bitwise: `n & ((1<<k)-1)`              |
| `06_popcount_print_binary.cpp`       | `__builtin_popcountll`, print binary digits         |
| `07_binary_to_decimal.cpp`           | Binary to decimal using bitset                      |
| `08_even_odd_check.cpp`              | Even/odd check using `n & 1`                        |
| `09_uppercase_lowercase_bit.cpp`     | Convert uppercase↔lowercase using bit manipulation  |
| `10_unset_lsb_msb_bits.cpp`          | Unset bits from LSB to k, and MSB to k              |
| `11_power_of_2_check.cpp`            | Check if number is power of 2                       |
| `12_xor_properties.cpp`              | XOR properties: `x^x=0`, `x^0=x`                    |
| `13_swap_using_xor.cpp`              | Swap two integers using XOR                         |
| `14_bitmask_correspond_set.cpp`      | Build bitmask from indices, find common elements    |
| `15_limit_using_bitmask.cpp`         | int=32 bits, ll=64 bits limit reminder              |
| `16_subset_enumeration_bitmask.cpp`  | Enumerate all subsets using bitmask (2^n)           |

---

## 📊 09_sorting — Sorting & Searching

| File                                            | Description                                |
| ----------------------------------------------- | ------------------------------------------ |
| `01_custom_comparator_ascending_descending.cpp` | Pair comparators: ascending and descending |
| `02_lambda_comparators.cpp`                     | Lambda comparators for pairs               |
| `03_mex_function.cpp`                           | MEX (minimum excludant) using set          |

---

## 🪟 10_sliding_window — Sliding Window

| File                                       | Description                        |
| ------------------------------------------ | ---------------------------------- |
| `01_sliding_window_fixed_with_map.cpp`     | Fixed window with map              |
| `02_sliding_window_longest_sum_le_k.cpp`   | Longest subarray with sum ≤ k      |
| `03_sliding_window_standard_template.cpp`  | Standard expand/shrink template    |
| `04_sliding_window_optimized_O_n.cpp`      | Optimized O(n) for max length only |
| `05_sliding_window_count_subarrays.cpp`    | Count subarrays with sum ≤ goal    |
| `06_sliding_window_exactly_k_distinct.cpp` | Exactly k distinct elements        |

---

## 🔁 11_recursion_backtracking — Recursion & Backtracking

| File                                                 | Description                               |
| ---------------------------------------------------- | ----------------------------------------- |
| `01_recursion_print_1_to_n.cpp`                      | Print 1→n and n→1 using recursion         |
| `02_recursion_backtracking_generate_parentheses.cpp` | Generate all valid parentheses            |
| `03_all_subsets.cpp`                                 | All subsets using take/not-take recursion |
| `04_recursion_template_take_not_take.cpp`            | General recursion template with sum check |
| `05_recursion_3_steps.cpp`                           | Recursion with 3 steps at a time          |
| `06_interactive_problems_template.cpp`               | Interactive problem template              |

---

## 📌 Before Submit Checklist

```
✓ Check for integer overflow, array bounds
✓ Check for special case: n = 1
✓ Don't divide anything — multiply the other side
✓ Prevent precision error: use round(sqrt(...)), powl()
✓ DON'T GET STUCK ON ONE APPROACH
```

---

_© Ayon Das Gupta — dasguptaayon55@gmail.com_
