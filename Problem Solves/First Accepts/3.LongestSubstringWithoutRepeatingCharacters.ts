function lengthOfLongestSubstring(s: string): number {
    let lenRes = 0;
    for(let i=0; i<s.length; i++) {
        let len = 0
        let mySet = new Set();
        mySet.add(s[i])
        len++
        for(let j=i+1; j<s.length; j++) {
            if(mySet.has(s[j])) {
                break
            } else {
                mySet.add(s[j])
                len++
            }
        }
        if(lenRes < len) {
            lenRes = len
        }
    }
    return lenRes
};