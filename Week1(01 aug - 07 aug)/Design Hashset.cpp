
class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<int> hs;
    MyHashSet() {
        hs.resize(1000000,0);
    }
    
    void add(int key) {
        hs[key]=1;
    }
    
    void remove(int key) {
        hs[key]=0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return hs[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
