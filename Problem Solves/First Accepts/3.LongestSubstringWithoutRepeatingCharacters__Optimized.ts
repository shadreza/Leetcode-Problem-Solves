function lengthOfLongestSubstringOptimized(s: string): number {
    let i = 0
    let j = 0
    let l = 0
    let len = 0;
    let myMap = new Map()

    if (s.length <= 1) return s.length
    
    while(i<s.length) {
        
        if (myMap.has(s[j])) {
            i = myMap.get(s[j]) + 1
            myMap.clear()
            myMap.set(s[i], i)
            l=1
            j = i + 1
        } else {
            if(s[j]==undefined) break
            myMap.set(s[j], j)
            j++
            l++
        }

        if (l>len) len=l
        
    }
    
    return len
};