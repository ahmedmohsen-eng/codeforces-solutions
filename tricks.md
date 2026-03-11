# CP Tricks & Tips

## STL & Data Structures

### Check if element exists in `unordered_set` (without `.count()`)
If you forget the `.count()` syntax, this works:
```cpp
bool exists(unordered_set<int>& s, int x) {
    int before = s.size();
    s.insert(x);
    if (s.size() == before) return true;  // already existed
    s.erase(x);  // undo insertion
    return false;
}
```
**Complexity:** O(1) average — same as `.count()`, but more operations.  
**Prefer:** `s.count(x)` or `s.find(x) != s.end()` when you remember the syntax.
