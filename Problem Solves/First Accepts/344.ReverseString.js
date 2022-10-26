let s = ["h","e","l","l","o"]

let c = ""
for(let i=0; i<(s.length)/2; i++) {
    c = s[i]
    s[i] = s[s.length-1 - i]
    s[s.length-1 - i] = c
}

console.log(s)